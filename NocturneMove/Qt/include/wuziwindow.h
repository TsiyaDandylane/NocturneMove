#ifndef WUZIWINDOW_H
#define WUZIWINDOW_H

#include "chessboard.h"
#include "sky.h"

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QMessageBox>
#include <QFont>
#include <QPushButton>
#include <vector>

class WuziWindow : public QWidget
{
    Q_OBJECT

public:
    WuziWindow(QWidget* parent = nullptr);
    ~WuziWindow();

public:
    QPushButton* reMainButton;
    ChessBoard* chessBoard;
    std::vector<Sky*> skys;
};

#endif