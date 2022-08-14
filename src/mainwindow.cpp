#include "mainwindow.h"
#include "cropper/imagecropperdialog.h"
#include <algorithm>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QAction>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    this->setMouseTracking(true);
    this->setWindowTitle("地图画板");
    this->resize(1225,800);
    {
        int screen_X = QGuiApplication::primaryScreen()->geometry().width();
        int screen_Y = QGuiApplication::primaryScreen()->geometry().height();
        int pos_X = (screen_X - (1200+300+40))/2;
        int pos_Y = (screen_Y - (840))/2;
        this->move(pos_X,pos_Y);
    }

    // Type 1.
    QWidget* centralWidget = new QWidget(this);
    centralWidget->setMouseTracking(true);
    this->setCentralWidget(centralWidget);
    QVBoxLayout* mainLayout = new QVBoxLayout(centralWidget);

    world = new World(centralWidget);
    mainLayout->addWidget(world);

    // or Type 2.
    //world = new World(this);
    //this->setCentralWidget(world);

    QMenu* fileMenu = menuBar()->addMenu("文件");
    actionLoadData    = new QAction("读取数据", this);
    actionSaveAsData  = new QAction("保存为数据", this);
    actionSaveAsImage = new QAction("保存为图片", this);
    actionSaveAsData-> setIcon(QIcon(":/icon/save-as-data.png"));
    actionSaveAsImage->setIcon(QIcon(":/icon/save-as-image.png"));
    actionLoadData->   setIcon(QIcon(":/icon/load-data.png"));
    fileMenu->addAction(actionLoadData);
    fileMenu->addAction(actionSaveAsData);
    fileMenu->addAction(actionSaveAsImage);
    connect(actionLoadData,    &QAction::triggered, this, &MainWindow::onLoadData);
    connect(actionSaveAsData,  &QAction::triggered, this, &MainWindow::onSaveAsData);
    connect(actionSaveAsImage, &QAction::triggered, this, &MainWindow::onSaveAsImage);

    QMenu* windowMenu = menuBar()->addMenu("窗口");
    actionShowControlDialog = new QAction("控制面板", this);
    actionShowControlDialog->setCheckable(true);
    actionShowControlDialog->setChecked(true);
    windowMenu->addAction(actionShowControlDialog);
    connect(actionShowControlDialog, &QAction::triggered, this, [&](bool checked) {
        if (checked) {
            controlDialog->show();
        } else {
            controlDialog->hide();
        }
    });

    QMenu* bgMenu = menuBar()->addMenu("背景");
    actionLoadBg  = new QAction("打开图片", this);
    actionClearBg = new QAction("清除图片", this);
    actionLoadBg ->setIcon(QIcon(":/icon/save-as-image.png"));
    actionClearBg->setIcon(QIcon(":/icon/reset.png"));
    bgMenu->addAction(actionLoadBg);
    bgMenu->addAction(actionClearBg);
    connect(actionLoadBg, &QAction::triggered, this, &MainWindow::onLoadBg);
    connect(actionClearBg, &QAction::triggered, this, [&]() {
        if(world->haveBg()) {
            world->setBgFlag(false);
            world->refreshAll();
            controlDialog->logInfo("背景清除成功。");
        } else {
            controlDialog->logError("背景未设置。");
        }
    });

    QMenu* aiMenu = menuBar()->addMenu("AI");
    actionLoadGray = new QAction("智能识别", this);
    actionLoadGray->setIcon(QIcon(":/icon/color.ico"));
    aiMenu->addAction(actionLoadGray);
    connect(actionLoadGray, &QAction::triggered, this, &MainWindow::onLoadGray);

    createControlDialog();
    controlDialog->show();
}

void MainWindow::createControlDialog() {
    controlDialog = new ControlDialog(world, nullptr);
    connect(controlDialog, &ControlDialog::sigClosed, this, [&] {
        actionShowControlDialog->setChecked(false);
    });
}

void MainWindow::closeEvent(QCloseEvent*) {
    controlDialog->disconnect();  // Important !!!
    controlDialog->close();
}


void MainWindow::onLoadData() {
    if (world->isFindingPath()) {
        emit controlDialog->logError("无法在算法运行时读取数据。");
        return;
    }

    QString filename = QFileDialog::getOpenFileName(this, "读取数据", ".", "数据文件(*.dat)");
    if (filename.isNull()) {
        return;
    }
    if (world->loadData(filename)) {
        world->refreshAll();
        controlDialog->logInfo("数据读取成功。");
    } else {
        controlDialog->logError("数据读取失败。");
    }
}

void MainWindow::onLoadGray() {
    if (world->isFindingPath()) {
        emit controlDialog->logError("无法在算法运行时读取数据。");
        return;
    }

    QString filename = QFileDialog::getOpenFileName(this, "打开图片", ".");
    if (filename.isNull()) {
        return;
    }
    QImage img(filename);
    img = img.scaled(world->getWorldSize(),Qt::IgnoreAspectRatio);

    for(int y = 0; y<img.height(); y++) {
        //获取一行像素的首地址
        QRgb * line = (QRgb *)img.scanLine(y);
        for(int x = 0; x<img.width(); x++) {
            //灰度转换的一种方法（R G B 求平均值）
            int gray = (qRed(line[x])*0.299 + qGreen(line[x])*0.587 + qBlue(line[x])*0.114);
            if(gray<128) {
                // 0
                world->setObstacle(x,y,1);
            } else {
                // 1
                world->setObstacle(x,y,0);
            }
        }
    }
    controlDialog->logInfo("灰度图读取成功。");
    world->refreshAll();
}

void MainWindow::onSaveAsData() {
    if (world->isFindingPath()) {
        emit controlDialog->logError("无法在算法运行时保存数据。");
        return;
    }

    QDialog* dialog = new QDialog(nullptr);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setWindowTitle("保存选项");
    QVBoxLayout* checkboxLayout = new QVBoxLayout();
    QCheckBox* checkboxObstacles = new QCheckBox("障碍点", dialog);
    QCheckBox* checkboxSrc  = new QCheckBox("起点", dialog);
    QCheckBox* checkboxDest = new QCheckBox("目标点", dialog);
    QCheckBox* checkboxPath = new QCheckBox("路径", dialog);
    QCheckBox* checkboxVisited = new QCheckBox("搜索点", dialog);
    checkboxObstacles->setChecked(true);
    checkboxSrc->setChecked(true);
    checkboxDest->setChecked(true);
    checkboxPath->setChecked(true);
    checkboxVisited->setChecked(true);
    checkboxLayout->addWidget(checkboxObstacles);
    checkboxLayout->addWidget(checkboxSrc);
    checkboxLayout->addWidget(checkboxDest);
    checkboxLayout->addWidget(checkboxPath);
    checkboxLayout->addWidget(checkboxVisited);
    QPushButton* btnOK = new QPushButton("确认", dialog);
    QPushButton* btnCancel = new QPushButton("取消", dialog);
    QHBoxLayout* btnLayout = new QHBoxLayout();
    btnLayout->addWidget(btnOK);
    btnLayout->addWidget(btnCancel);
    QVBoxLayout* mainLayout = new QVBoxLayout(dialog);
    mainLayout->addLayout(checkboxLayout);
    mainLayout->addLayout(btnLayout);

    connect(btnCancel, &QPushButton::clicked, dialog, &QDialog::close);
    connect(btnOK, &QPushButton::clicked, this, [=] {
        dialog->close();
        QString filename = QFileDialog::getSaveFileName(this, "保存数据", ".", "数据文件(*.dat)");
        if (filename.isNull()) {
            return;
        }
        bool ret = world->saveData(filename, checkboxObstacles->isChecked(),
                                   checkboxSrc->isChecked(), checkboxDest->isChecked(),
                                   checkboxPath->isChecked(), checkboxVisited->isChecked());
        if (ret) {
            controlDialog->logInfo("数据保存成功。");
        } else {
            controlDialog->logError("数据保存失败。");
        }
    });
    dialog->setModal(true);
    dialog->show();
}

void MainWindow::onSaveAsImage() {
    if (world->isFindingPath()) {
        emit controlDialog->logError("无法在算法运行时保存数据。");
        return;
    }

    QString filename = QFileDialog::getSaveFileName(this, "保存图片", ".", "位图(*.png)");
    if (filename.isNull()) {
        return;
    }

    if (world->saveImage(filename)) {
        controlDialog->logInfo("图片保存成功。");
    } else {
        controlDialog->logError("图片保存失败。");
    }
}

/* Type 1
 * 直接打开图片文件 */

//void MainWindow::onLoadBg() {
//    if (world->isFindingPath()) {
//        emit controlDialog->logError("无法在算法运行时设置背景。");
//        return;
//    }

//    QString filename = QFileDialog::getOpenFileName(this, "打开图片", ".");
//    if (filename.isNull()) {
//        return;
//    }

//    if(world->setBgFlag(true, filename)) {
//        controlDialog->logInfo("背景设置成功。");
//    } else {
//        controlDialog->logError("背景设置失败。");
//        return;
//    }

//    world->refreshAll();
//}

/* Type 2
 * 调用图片裁剪窗口，并返回裁剪后的图片 */

void MainWindow::onLoadBg() {
    if (world->isFindingPath()) {
        emit controlDialog->logError("无法在算法运行时设置背景。");
        return;
    }

    QString filename = QFileDialog::getOpenFileName(this, "打开图片", ".");
    if (filename.isNull()) {
        return;
    }

    QImage temp(filename);
    int window_w = std::min(this->width(),temp.width());
    int window_h = std::min(this->height(),temp.height());
    QPixmap image = ImageCropperDialog::getCroppedImage(filename, window_w, window_h, CropperShape::RECT);

    if(world->setBgFlag(image)) {
        controlDialog->logInfo("背景设置成功。");
    } else {
        controlDialog->logError("背景设置失败。");
    }

    world->refreshAll();
}
