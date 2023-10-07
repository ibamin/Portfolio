#pragma once
#include "overloading.h"

int getsum(int a, int b) {
	return a + b;
}

double getsum(double a, double b) {
	return a + b;
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}