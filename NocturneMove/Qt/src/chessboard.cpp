#include "chessboard.h"

ChessBoard::ChessBoard(int size, float blockSize, float posI0, float posJ0, QColor* color)
{
    this->size = size;
    this->blockSize = blockSize;    
    this->posI0 = posI0;
    this->posJ0 = posJ0;        
    this->color = color;
    this->situ = std::vector<std::vector<int>>(size,std::vector<int>(size,0));
}

ChessBoard::~ChessBoard()
{
}