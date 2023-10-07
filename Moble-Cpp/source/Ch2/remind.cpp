#include "remind.h"

//call by reference
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	show(*a, *b);
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
	show(a, b);
}
int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}
void remind_test1(int &a) {
	a++;
}
void remind_test2(int& a) {
	a = a* -1;
}
void remind_test3() {
	const int num = 12;
	const int* p = &num;
	//const int &rp = *p와 이밑에 코드와의 차이점
	//int const *p 하면 다른 포인트를 가리키지 못함
	const int* &rp = p;
	cout << *p << '\n';
	cout << *rp << '\n';
}
char* remind_test4(int size) {
	char* arr = new char[size];
	return arr;
}
/*
내가 짠 코드는 지역변수인지라 반환후 삭제 처리 그렇기에 &(주소값)으로 반환해서 리턴을 받은 변수는
사라진곳을 가리키는 변수가됨 그래서 주석처리후 수정 단 변수하나를 위해 포인터 연산을 한다는 것은 비효율적인 코드임
현재 코드에서 tmp 객체를 생성하고 그 객체의 참조를 반환하고자 하지만, 
tmp 객체는 함수 내부에서 생성된 지역 변수입니다. 함수가 반환되면서 
tmp 객체가 소멸되므로 반환된 참조는 무효한 참조가 됩니다. 이는 잘못된 동작을 유발할 수 있습니다.
*/
point& remind_test5(point& a, point& b) {
	//point tmp;
	point * tmp =new point;
	tmp->xpos = a.xpos + b.xpos;
	tmp->ypos = a.ypos + b.ypos;
	return *tmp;
	//return tmp;
}

void remind_test_main1() {
	int val1 = 10;
	int val2 = 20;
	cout << "원본\n";
	cout << "1 : " << val1 << "  2 : " << val2 << '\n';
	cout << "called swap of c pointer\n";
	swap(&val1, &val2);
	cout << "called swap of cpp reference\n";
	swap(val1, val2);
}
void remind_test_main2() {
	int num1 = 1;
	/*
	RefRetFuncOne에서 int&형태로 반환
	&num2로 받으면 num2의 주소값을 반환되는 int&로 지정하는 것이기에 num1과 같은것을 가짐 
	num2로 받으면 주소값을 반환되는 int&의 값을 저장하게 됨 (지역변수로 새로 만들어 지기 때문에 차이가 있음)
	*/
	int num2 = RefRetFuncOne(num1);

	num1++;
	num2++;

	cout << "num1:" << num1 << '\n';
	cout << "num2:" << num2 << '\n';
	cout << "num1 주소:" << &num1 << '\n';
	cout << "num2 주소:" << &num2 << '\n';
}
void remind_test_main3() {
	int a = 10;
	cout << "origin :" << a << '\n';
	remind_test1(a);
	cout << "remind_test1 :" << a << '\n';
	remind_test2(a);
	cout << "remind_test2 :" << a << '\n';
	remind_test3();

	char* r = remind_test4(5);
	cout << "remind_test4 :" << &r << '\n';
	delete[]r;
	point x, y; // point t;
	
	x.xpos = 3; x.ypos = 5;
	y.xpos = 5; y.ypos = 7;
	point& t = remind_test5(x, y);
	delete & t;
	cout << "remind _test5 t.xpos:" << t.xpos << " t.ypos :" << t.ypos;
}

void show(int a, int b) {
	cout << "1 : " << a << "  2 : " << b << '\n';
}