#include "cppmalloc.h"

/*
cpp에서 동적할당
*/
char* make_chararr(int size) {
	return new char[size];
}
/*
make_chararr를 활용해서 문자열 조정해보기
*/
void malloc_exam1() {
	char* s = make_chararr(20);
	strcpy(s, "hello CPP~");
	cout << s;
	delete[]s;
}

/*
구조체
*/
void fucn5() {
	Point* p = new Point();
	p->xpos = 10;
	p->ypos = 20;
	delete p;
}

/*
길이가 10일 int형 배열을 new로 생성하고 1부터 10까지 저장한 후 출력 함수 종료 전에 배열 삭제
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
길이가 32인 char 배열을 new로 생성하고 사용자로부터 이름을 입력받아 젖장하고 출력 함수 종료전에 삭제
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
이름 연락처 나이를 저장하는구조체를 만들고 new로 할당 후 홍길동 010-1234-5678 26을 저장한후 출력하고 삭제
*/

void malloc_test3() {
	unit* a = new unit();
	a->name = "홍길동";
	a->phone = "010-1234-5678";
	a->age = 26;
	a->show();
	delete a;
}