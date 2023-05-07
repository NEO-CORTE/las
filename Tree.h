#include "Shape.h"

class Tree :
    public Shape
{
public:
    Tree(int h, char z, string col);
    friend class Forest;
};

