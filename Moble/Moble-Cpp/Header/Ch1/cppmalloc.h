#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*
cpp���� �����Ҵ�
*/
char* make_chararr(int size);

/*
make_chararr�� Ȱ���ؼ� ���ڿ� �����غ���
*/
void malloc_exam1();

/*
����ü
*/
typedef struct {
	int xpos;
	int ypos;
}Point;
void fucn5();

/*
���̰� 10�� int�� �迭�� new�� �����ϰ� 1���� 10���� ������ �� ��� �Լ� ���� ���� �迭 ����
*/
void malloc_test1();

/*
���̰� 32�� char �迭�� new�� �����ϰ� ����ڷκ��� �̸��� �Է¹޾� �����ϰ� ��� �Լ� �������� ����
*/
void malloc_test2();

/*
�̸� ����ó ���̸� �����ϴ±���ü�� ����� new�� �Ҵ� �� ȫ�浿 010-1234-5678 26�� �������� ����ϰ� ����
*/
struct unit {
	string name;
	string phone;
	int age;
	void show() {
		cout << "�̸� :" << name << "\n�޴��� :" << phone << "\n���� :" << age;
	}
};
void malloc_test3();