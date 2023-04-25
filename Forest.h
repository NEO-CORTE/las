#include "Rectangle.h"
#include "Tree.h"
#include "Triangle.h"
#include "Window.h"
#include <vector>
class Forest
{
private:
	int W;
	int H;
	int** tab;
	vector <Shape*>wektor;
public:
	Forest(int w, int h);
	~Forest();
	void printLas();
	void AddTree(int h, char z, int y, int x);
	void AddRect(int w, int h, char z, int y, int x);
	void AddWindow(int w, int h, char z, int y, int x);
	void AddTriangle(int h, char z, int y, int x, int rot_op = 1);
};

