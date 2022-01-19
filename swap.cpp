#define _CRT_SECURE_NO_WARNINGS 1
#include"swap.h"

void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
	cout << "a=" << x << endl;
	cout << "b=" << y << endl;
}