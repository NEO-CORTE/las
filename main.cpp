#include <iostream>
#include <string>
#include "Forest.h"
using namespace std;
int main()
{
	Forest mainForest(60, 40);
	Forest bckup(60, 40);
	bckup.AddRect(20, 5, '*', "red", 10, 10);
	Rectangle* kwadrat = new Rectangle(20, 3, 'Q', "red");
	kwadrat->x = 10;
	kwadrat->y = 7;
	//bckup.AddRect(20, 3, 'Q', "red", 7, 10);

	mainForest += bckup;

	mainForest.AddRect(20, 5, '*',"red", 10, 10);
	mainForest.AddRect(20, 3, 'Q',"red", 7, 10);
	mainForest.AddWindow(4, 3, 'Q',"blue", 12, 18);
	mainForest.AddWindow(4, 3, 'Q',"gray", 10, 12);
	mainForest.AddWindow(4, 3, 'Q',"gray", 10, 24);
	mainForest.AddTriangle(3,'W',"red", 7, 7, 1);
	mainForest.AddTriangle(3, 'W',"red", 7, 30, 2);
	mainForest.AddTree(4, 'P',"green", 1, 12);
	mainForest.AddTree(5, 'P', "green", 2, 20);
	mainForest.AddTree(4, 'P', "green", 20, 10);
	mainForest.AddTree(5, 'P', "green", 20, 25);
	mainForest.printLas();
}