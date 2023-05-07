#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class Shape
{
public:
	char znak;
	string color;
protected:
	int height;
	int width;
	int** tab;
	int x;
	int y;
	virtual void draw() {
		cout << "Why am i displayed";
	}
public:
	~Shape() {
		int j;
		for (j = 0; j < height; j++)
			delete tab[j];
		delete tab;
	}
};

