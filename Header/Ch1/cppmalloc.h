#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*
cpp에서 동적할당
*/
char* make_chararr(int size);

/*
make_chararr를 활용해서 문자열 조정해보기
*/
void malloc_exam1();

/*
구조체
*/
typedef struct {
	int xpos;
	int ypos;
}Point;
void fucn5();

/*
길이가 10일 int형 배열을 new로 생성하고 1부터 10까지 저장한 후 출력 함수 종료 전에 배열 삭제
*/
void malloc_test1();

/*
길이가 32인 char 배열을 new로 생성하고 사용자로부터 이름을 입력받아 젖장하고 출력 함수 종료전에 삭제
*/
void malloc_test2();

/*
이름 연락처 나이를 저장하는구조체를 만들고 new로 할당 후 홍길동 010-1234-5678 26을 저장한후 출력하고 삭제
*/
struct unit {
	string name;
	string phone;
	int age;
	void show() {
		cout << "이름 :" << name << "\n휴대폰 :" << phone << "\n나이 :" << age;
	}
};
void malloc_test3();