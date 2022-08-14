/* 主窗口类
 *
 * 1.显示画板
 * 2.管理文件读写
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "world.h"
#include "controldialog.h"


class MainWindow : public QMainWindow {
    Q_OBJECT
  public:
    MainWindow(QWidget *parent = nullptr);

    void createControlDialog();

  public slots:
    void onLoadData();
    void onLoadGray();
    void onSaveAsData();
    void onSaveAsImage();
    void onLoadBg();

  protected:
    void closeEvent(QCloseEvent* ev) override;

  private:
    World* world;
    ControlDialog* controlDialog;

    QAction* actionShowControlDialog;
    QAction* actionLoadData;
    QAction* actionLoadGray;
    QAction* actionSaveAsData;
    QAction* actionSaveAsImage;
    QAction* actionLoadBg;
    QAction* actionClearBg;

};
#endif // MAINWINDOW_H
