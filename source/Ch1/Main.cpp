#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "basic.h"
#include "bool.h"
#include "cmalloc_study.h"
#include "cppmalloc.h"
#include "overloading.h"
#include "default_function.h"
#include "inline.h"
#include "NameSpace.h"
#include "reference.h"
//#define SQUARE(x) x*x
using namespace std;

void overloading_test() {
	int a, b;
	double c, d;
	cout << "정수 2개 >>";
	cin >> a >> b;
	cout << getsum(a, b) << '\n';
	cout << "실수 2개 >>";
	cin >> c >> d;
	cout << getsum(c, d) << '\n';

	cout << "before swap\n";
	cout << " a : " << a << " b : " << b << '\n';
	swap(a, b);
	cout << "after swap\n";
	cout << " a : " << a << " b : " << b;
}

int main() {
	NameSpace1::function();
	NameSpace2::function();
	NameSpace2::function2();
	cout << "Parent::num :" << Parent::num << '\n';
	cout << "Parent::Child::num :" << Parent::Child::num << '\n';
	cout << "Parent::Child::GrandChild::num :" << Parent::Child::GrandChild::num << '\n';
	cout << "GChild::num :" << GChild::num;
}



