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
	bool wasCopied = 0;
public:
	Forest(int w, int h);
	~Forest();
	void printLas();
	void AddTree(int h, char z, string col,int y, int x);
	void AddRect(int w, int h, char z, string col, int y, int x);
	void AddWindow(int w, int h, char z, string col, int y, int x);
	void AddTriangle(int h, char z, string col, int y, int x, int rot_op = 1);
	Forest& operator+=(Shape& obj) {
		this->wektor.push_back(&obj);
		return *this;
	}
	Forest& operator+=(Forest& obj) {
		this->wektor.reserve(this->wektor.size() + obj.wektor.size());
		this->wektor.insert(this->wektor.end(), obj.wektor.begin(), obj.wektor.end());
		obj.wasCopied = 1;
		return *this;
	}
};

