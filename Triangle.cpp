#include "Triangle.h"
Triangle::Triangle(int h, char z, string col, int rot_op) {
	height = h;
	znak = z;
	color = col;
	tab = new int* [height];
	for (int j = 0; j < height; j++) {
		tab[j] = new int[height];
		for (int i = 0; i < height; i++) {
			if (rot_op == 1)
			{
				if (i > height - 2 - j) {
					tab[j][i] = 1;
				}
				else {
					tab[j][i] = 0;
				}
			}
			if (rot_op == 2)
			{
				if (height - i + 1 > height - j) {
					tab[j][i] = 1;
				}
				else {
					tab[j][i] = 0;
				}
			}
			if (rot_op == 3)
			{
				if (j < height - i) {
					tab[j][i] = 1;
				}
				else {
					tab[j][i] = 0;
				}
			}
			if (rot_op == 4)
			{
				if (height - i - 1 < height - j) {
					tab[j][i] = 1;
				}
				else {
					tab[j][i] = 0;
				}
			}
		}
	}

}

void Triangle::draw() {

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < height; i++) {
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