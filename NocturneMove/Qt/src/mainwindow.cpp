#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
    wuziButton = new QPushButton("五子棋",this);
    wuziButton->setFixedSize(200,50);
    wuziButton->move(400,225);

    weiqiButton = new QPushButton("围棋",this);
    weiqiButton->setFixedSize(200,50);
    weiqiButton->move(400,325);

    chessButton = new QPushButton("象棋",this);
    chessButton->setFixedSize(200,50);
    chessButton->move(400,425);

    hevButton = new QPushButton("天技棋",this);
    hevButton->setFixedSize(200,50);
    hevButton->move(400,525);

    this->setFixedSize(1000,800);
    this->setWindowTitle("白夜天技棋");

    wuziWindow = new WuziWindow();           //gameWindow没有在主界面上面，是分开的两个窗口
    connect(wuziButton,&QPushButton::clicked,this,[=](){this->hide();wuziWindow->show();});
    connect(wuziWindow->reMainButton,&QPushButton::clicked,this,[=](){wuziWindow->hide();this->show();});
    
    hevWindow = new HevWindow();
    connect(hevButton,&QPushButton::clicked,this,[=](){this->hide();hevWindow->show();});
    connect(hevWindow->reMainButton,&QPushButton::clicked,this,[=](){hevWindow->hide();this->show();});
}

MainWindow::~MainWindow()
{
    delete wuziButton;
    delete weiqiButton;
    delete chessButton; 
    delete hevButton;
    delete wuziWindow;
    delete hevWindow;
}