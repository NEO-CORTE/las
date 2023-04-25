#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
public:
    Rectangle(int w, int h, char z);
    void draw();
    friend class Forest;
};