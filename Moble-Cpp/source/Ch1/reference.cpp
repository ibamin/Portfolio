#include "reference.h"

void reference_test() {
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "val :" << num1 << '\n';
	cout << "ref :" << num2 << '\n';

	cout << "val :" << &num1 << '\n';
	cout << "ref :" << &num2 << '\n';
}

void SwapByRef(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}