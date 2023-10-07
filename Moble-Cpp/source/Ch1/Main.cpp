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
	cout << "Á¤¼ö 2°³ >>";
	cin >> a >> b;
	cout << getsum(a, b) << '\n';
	cout << "½Ç¼ö 2°³ >>";
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
	/*
	namespace.h에서 extern을 했기때문에 이곳에서도 사용가능 extern을 한게 아니면
	#include "namespace.h"과정에서 num을 생성하기에 전역변수의 중복이 일어나게 되며
	링커오류가 발생한다.
	*/
	cout << "Parent::num :" << Parent::num << '\n';
	cout << "Parent::Child::num :" << Parent::Child::num << '\n';
	cout << "Parent::Child::GrandChild::num :" << Parent::Child::GrandChild::num << '\n';
	cout << "GChild::num :" << GChild::num;
}



