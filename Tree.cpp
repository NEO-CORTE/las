#include "Tree.h"
Tree::Tree(int h, char z, string col) {
	height = h;
	znak = z;
	width = 2 * h - 1;
	color = col;
	tab = new int* [height];
	for (int j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (int i = 0; i < width; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
}
