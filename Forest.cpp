#include "Forest.h"
Forest::Forest(int w, int h) {
	W = w;
	H = h;

	tab = new int* [H];
	for (int j = 0; j < H; j++) {
		tab[j] = new int[W];
		for (int i = 0; i < W; i++) {
			tab[j][i] = 0;
		}
	}
}

Forest::~Forest() {
	int j;
	for (j = 0; j < H; j++)
		delete tab[j];
	delete tab;
	for (auto t : wektor) {
		if (!wasCopied) {
			delete t;
		}
	}
}
void Forest::printLas() {
	int i, j;
	for (j = 0; j < H; j++) {
		for (i = 0; i < W; i++) {
			int k = tab[j][i];
			if (k) {
				if (wektor[k - 1]->color == "red") {
					cout << "\033[;31m";
				}
				if (wektor[k - 1]->color == "blue") {
					cout << "\033[;34m";
				}
				if (wektor[k - 1]->color == "gray") {
					cout << "\033[;90m";
				}
				if (wektor[k - 1]->color == "green") {
					cout << "\033[;32m";
				}
				cout << wektor[k - 1]->znak << "\033[0m";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void Forest::AddTree(int h, char z, string col, int y, int x) {
	int i, j;
	Tree* drzewo1 = new Tree(h, z, col);
	drzewo1->x = x;
	drzewo1->y = y;
	wektor.push_back(drzewo1);
	for (j = 0; j < drzewo1->height; j++) {
		for (i = 0; i < drzewo1->width; i++) {
			if (drzewo1->tab[j][i] == 1) {
				tab[j + y][i + x] = drzewo1->tab[j][i] * wektor.size();
			}
		}
	}
}
void Forest::AddRect(int w, int h, char z, string col, int y, int x) {
	int i, j;
	Rectangle* prosto1 = new Rectangle(w, h, z, col);
	prosto1->x = x;
	prosto1->y = y;
	wektor.push_back(prosto1);
	for (j = 0; j < prosto1->height; j++) {
		for (i = 0; i < prosto1->width; i++) {
			if (prosto1->tab[j][i] == 1) {
				tab[j + y][i + x] = prosto1->tab[j][i] * wektor.size();
			}
		}
	}
}
void Forest::AddWindow(int w, int h, char z, string col, int y, int x) {
	int i, j;
	Window* prosto1 = new Window(w, h, z, col);
	prosto1->x = x;
	prosto1->y = y;
	wektor.push_back(prosto1);
	for (j = 0; j < prosto1->height; j++) {
		for (i = 0; i < prosto1->width; i++) {
			if (prosto1->tab[j][i] == 1) {
				tab[j + y][i + x] = prosto1->tab[j][i] * wektor.size();
			}
			if (prosto1->tab[j][i] == 0) {
				tab[j + y][i + x] = 0;
			}
		}
	}
}
void Forest::AddTriangle(int h, char z, string col, int y, int x, int rot_op) {
	int i, j;
	Triangle* troj1 = new Triangle(h, z, col, rot_op);
	troj1->x = x;
	troj1->y = y;
	wektor.push_back(troj1);
	for (j = 0; j < troj1->height; j++) {
		for (i = 0; i < troj1->height; i++) {
			if (troj1->tab[j][i] == 1) {
				tab[j + y][i + x] = troj1->tab[j][i] * wektor.size();
			}
		}
	}
}