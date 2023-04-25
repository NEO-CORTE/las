#include <iostream>
#include <string>
#include "Forest.h"
using namespace std;
int main()
{
	Forest mainForest(60, 40);
	mainForest.AddRect(20, 5, '*', 10, 10);
	mainForest.AddRect(20, 3, 'Q', 7, 10);
	mainForest.AddWindow(4, 3, 'Q', 12, 18);
	mainForest.AddWindow(4, 3, 'Q', 10, 12);
	mainForest.AddWindow(4, 3, 'Q', 10, 24);
	mainForest.AddTriangle(3,'W', 7, 7, 1);
	mainForest.AddTriangle(3, 'W', 7, 30, 2);
	mainForest.AddTree(4, 'P', 1, 12);
	mainForest.AddTree(5, 'P', 2, 20);
	mainForest.AddTree(4, 'P', 20, 10);
	mainForest.AddTree(5, 'P', 20, 25);
	mainForest.printLas();
}