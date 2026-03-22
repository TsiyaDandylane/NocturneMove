#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

#include "wuziwindow.h"
#include "hevwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    QPushButton* wuziButton;
    QPushButton* hevButton;
    QPushButton* weiqiButton;
    QPushButton* chessButton;
    WuziWindow* wuziWindow;
    HevWindow* hevWindow;
};

#endif