#pragma once
#include "Rectangle.h"
class Window :
    public Rectangle
{
public:
    Window(int w, int h, char z) : Rectangle(w, h, z) {
        int j;
        for (j = 0; j < height; j++) {
            for (int i = 0; i < width; i++) {
                if (j == 0 || j == height - 1) {

                }
                else {
                    if (i == 0 || i == width - 1) {

                    }
                    else {
                        tab[j][i] = 0;
                    }
                }
            }
        }   
    };
};

