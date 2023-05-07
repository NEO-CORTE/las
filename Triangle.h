#include "Shape.h"

class Triangle :
    public Shape
{
public:
    Triangle(int h, char z, string col, int rot_op = 1);
    void draw();
    friend class Forest;
};