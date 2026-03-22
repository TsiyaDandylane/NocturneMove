#include "hevwindow.h"

HevWindow::HevWindow(QWidget* parent) : QWidget(parent)
{
    QFont font;
    font.setPointSize(16);

    reMainButton = new QPushButton("返回主界面",this);
    reMainButton->setFixedSize(200,50);
    reMainButton->move(200,720);
    reMainButton->setFont(font);

    this->setFixedSize(1000,800);
    this->setWindowTitle("天技棋");
}

HevWindow::~HevWindow()
{    
    delete reMainButton;
}