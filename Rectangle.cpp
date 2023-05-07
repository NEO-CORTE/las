#include "Rectangle.h"
Rectangle::Rectangle(int w, int h, char z, string col) {
	width = w;
	height = h;
	znak = z;
	color = col;
	tab = new int* [height];
	for (int j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (int i = 0; i < width; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = 0; i < width; i++)
			tab[j][i] = 1;
}


void Rectangle::draw() {

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			if (tab[j][i] == 0) {
				cout << " ";
			}
			else
			{
				cout << znak;
			}
		}
		cout << "\n";
	}
}