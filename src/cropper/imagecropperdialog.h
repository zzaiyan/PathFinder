#ifndef IMAGECROPPER_H
#define IMAGECROPPER_H

#include <QWidget>
#include <QDialog>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QString>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

#include "imagecropperlabel.h"

/*******************************************************
 *  Loacl private class, which do image-cropping
 *  Used in class ImageCropper
*******************************************************/
class ImageCropperDialogPrivate : public QDialog {
    Q_OBJECT
  public:
    ImageCropperDialogPrivate(const QPixmap& imageIn, QPixmap& outputImage,
                              int windowWidth, int windowHeight,
                              CropperShape shape, QSize cropperSize = QSize()) :
        QDialog(nullptr),  outputImage(outputImage) {
        this->setAttribute(Qt::WA_DeleteOnClose, true);
        this->setWindowTitle("图片裁剪");
        this->setMouseTracking(true);
        this->setModal(true);

        imageLabel = new ImageCropperLabel(windowWidth, windowHeight, this);
        imageLabel->setCropper(shape, cropperSize);
        imageLabel->setOutputShape(OutputShape::RECT);
        imageLabel->setOriginalImage(imageIn);
        imageLabel->enableOpacity(true);

        QHBoxLayout* btnLayout = new QHBoxLayout();
        btnOk = new QPushButton("确定", this);
        btnCancel = new QPushButton("取消", this);
        btnLayout->addStretch();
        btnLayout->addWidget(btnOk);
        btnLayout->addWidget(btnCancel);

        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(imageLabel);
        mainLayout->addLayout(btnLayout);

        connect(btnOk, &QPushButton::clicked, this, [this]() {
            this->outputImage = this->imageLabel->getCroppedImage();
            this->close();
        });
        connect(btnCancel, &QPushButton::clicked, this, [this]() {
            this->outputImage = QPixmap();
            this->close();
        });
    }

  private:
    ImageCropperLabel* imageLabel;
    QPushButton* btnOk;
    QPushButton* btnCancel;
    QPixmap& outputImage;
};


/*******************************************************************
 *  class ImageCropperDialog
 *      create a instane of class ImageCropperDialogPrivate
 *      and get cropped image from the instance(after closing)
********************************************************************/
class ImageCropperDialog : QObject {
  public:
    static QPixmap getCroppedImage(const QString& filename,int windowWidth, int windowHeight,
                                   CropperShape cropperShape, QSize crooperSize = QSize()) {
        QPixmap inputImage;
        QPixmap outputImage;

        if (!inputImage.load(filename)) {
            //QMessageBox::critical(nullptr, "错误", "图片打开失败！", QMessageBox::Ok);
            return outputImage;
        }

        ImageCropperDialogPrivate* imageCropperDo =
            new ImageCropperDialogPrivate(inputImage, outputImage,
                                          windowWidth, windowHeight,
                                          cropperShape, crooperSize);
        imageCropperDo->move(100,100);
        imageCropperDo->exec();

        return outputImage;
    }
};



#endif // IMAGECROPPER_H
