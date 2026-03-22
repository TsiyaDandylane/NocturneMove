#include "wuziwindow.h"
#include "chessboard.h"
#include "sky.h"

WuziWindow::WuziWindow(QWidget* parent) : QWidget(parent)
{
    QFont* font = new QFont();
    font->setPointSize(16);

    reMainButton = new QPushButton("返回主界面",this);
    reMainButton->setFixedSize(200,50);
    reMainButton->move(200,720);
    reMainButton->setFont(font);

    this->setFixedSize(1000,800);
    this->setWindowTitle("五子棋");

    int boardSize = 15;
    int blockSize = 42;
    float posI0 = 1000 - 1000*5/8.0 - (boardSize-1)*blockSize/2.0;
    float posJ0 = 800 - (boardSize-1)*blockSize/2.0;
    QColor* color = new QColor(249/255.0,214/255.0,91/255.0,1);
    chessBoard = new ChessBoard(15,42,color);
}

WuziWindow::~WuziWindow()
{   
    delete reMainButton;
    delete font;
}