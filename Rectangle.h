#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
public:
    Rectangle(int w, int h, char z, string col);
    void draw();
    friend class Forest;
};