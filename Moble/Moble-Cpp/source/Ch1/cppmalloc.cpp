#include "cppmalloc.h"

/*
cpp���� �����Ҵ�
*/
char* make_chararr(int size) {
	return new char[size];
}
/*
make_chararr�� Ȱ���ؼ� ���ڿ� �����غ���
*/
void malloc_exam1() {
	char* s = make_chararr(20);
	strcpy(s, "hello CPP~");
	cout << s;
	delete[]s;
}

/*
����ü
*/
void fucn5() {
	Point* p = new Point();
	p->xpos = 10;
	p->ypos = 20;
	delete p;
}

/*
���̰� 10�� int�� �迭�� new�� �����ϰ� 1���� 10���� ������ �� ��� �Լ� ���� ���� �迭 ����
*/
void malloc_test1() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';
	delete[]arr;
}

/*
���̰� 32�� char �迭�� new�� �����ϰ� ����ڷκ��� �̸��� �Է¹޾� �����ϰ� ��� �Լ� �������� ����
*/
void malloc_test2() {
	int i = 0;
	string s;
	char* arr = new char[32];
	getline(cin, s);
	strcpy(arr, s.c_str());
	cout << arr;
	delete[]arr;
}

/*
�̸� ����ó ���̸� �����ϴ±���ü�� ����� new�� �Ҵ� �� ȫ�浿 010-1234-5678 26�� �������� ����ϰ� ����
*/

void malloc_test3() {
	unit* a = new unit();
	a->name = "ȫ�浿";
	a->phone = "010-1234-5678";
	a->age = 26;
	a->show();
	delete a;
}