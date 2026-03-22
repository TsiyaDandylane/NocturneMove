#ifndef SKY_H
#define SKY_H     

#include <QPainter>

class Sky
{
public:
    Sky(int kind, int i, int j, float size, float posI0, float posJ0);
    ~Sky();
    void draw();

public:
    int kind;
    int i;
    int j;
    float size;
    float posI0;
    float posJ0;
};

#endif