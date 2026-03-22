#include "sky.h"

Sky::Sky(int kind, int i, int j, float blockSize, float posI0, float posJ0)
{
    this->kind = kind;
    this->i = i;    
    this->j = j;
    this->size = blockSize/2.3;              
    this->posI0 = posI0;
    this->posJ0 = posJ0;
}

Sky::~Sky()
{
}

void Sky::draw()
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 2));
    painter.drawEllipse(posI0, posJ0, size, size);
}