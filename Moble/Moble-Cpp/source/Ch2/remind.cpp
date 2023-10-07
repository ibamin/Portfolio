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
	//const int &rp = *p�� �̹ؿ� �ڵ���� ������
	//int const *p �ϸ� �ٸ� ����Ʈ�� ����Ű�� ����
	const int* &rp = p;
	cout << *p << '\n';
	cout << *rp << '\n';
}
char* remind_test4(int size) {
	char* arr = new char[size];
	return arr;
}
/*
���� § �ڵ�� �������������� ��ȯ�� ���� ó�� �׷��⿡ &(�ּҰ�)���� ��ȯ�ؼ� ������ ���� ������
��������� ����Ű�� �������� �׷��� �ּ�ó���� ���� �� �����ϳ��� ���� ������ ������ �Ѵٴ� ���� ��ȿ������ �ڵ���
���� �ڵ忡�� tmp ��ü�� �����ϰ� �� ��ü�� ������ ��ȯ�ϰ��� ������, 
tmp ��ü�� �Լ� ���ο��� ������ ���� �����Դϴ�. �Լ��� ��ȯ�Ǹ鼭 
tmp ��ü�� �Ҹ�ǹǷ� ��ȯ�� ������ ��ȿ�� ������ �˴ϴ�. �̴� �߸��� ������ ������ �� �ֽ��ϴ�.
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
	cout << "����\n";
	cout << "1 : " << val1 << "  2 : " << val2 << '\n';
	cout << "called swap of c pointer\n";
	swap(&val1, &val2);
	cout << "called swap of cpp reference\n";
	swap(val1, val2);
}
void remind_test_main2() {
	int num1 = 1;
	/*
	RefRetFuncOne���� int&���·� ��ȯ
	&num2�� ������ num2�� �ּҰ��� ��ȯ�Ǵ� int&�� �����ϴ� ���̱⿡ num1�� �������� ���� 
	num2�� ������ �ּҰ��� ��ȯ�Ǵ� int&�� ���� �����ϰ� �� (���������� ���� ����� ���� ������ ���̰� ����)
	*/
	int num2 = RefRetFuncOne(num1);

	num1++;
	num2++;

	cout << "num1:" << num1 << '\n';
	cout << "num2:" << num2 << '\n';
	cout << "num1 �ּ�:" << &num1 << '\n';
	cout << "num2 �ּ�:" << &num2 << '\n';
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