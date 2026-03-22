#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QColor>
#include <vector>

class ChessBoard
{
public:
    ChessBoard(int size, float blockSize, float posI0, float posJ0, QColor* color);
    ~ChessBoard();

public:
    int size;
    float blockSize;
    float posI0;
    float posJ0;
    QColor* color;
    std::vector<std::vecter<int>> situ;
}