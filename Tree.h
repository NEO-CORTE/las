#include "Shape.h"

class Tree :
    public Shape
{
public:
    Tree(int h, char z);
    friend class Forest;
};

