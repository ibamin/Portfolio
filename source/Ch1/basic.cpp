#pragma once

#include"basic.h"

void exam1() {
	int num = 20;
	std::cout << "hello world!" << '\n';
	std::cout << "hello" << " world!" << '\n';
	std::cout << "num = " << num << '\n';
	std::cout << 3.14;
}

//1.2 입력
void exam2() {
	int val;
	std::cout << "첫 번째 숫자 입력 :";
	std::cin >> val;

	int val2;
	std::cout << "두 번째 숫자 입력 :";
	std::cin >> val2;

	std::cout << "두 숫자의 합 :" << val + val2;
}

//1.2 std정수 입출력
void exam3() {
	int a, b, result = 0;
	std::cout << "정수 2개 입력 :";
	std::cin >> a >> b;

	if (a < b)
		for (int i = a + 1; i < b; result += i, i++) {}
	else
		for (int i = b + 1; i < a; result += i, i++) {}
	std::cout << result;
}

//1.2 std 문자열 입출력
void exam4() {
	char name[100];
	char phone[100];

	std::cout << "이름 입력:";
	std::cin >> name;

	std::cout << "전화번호 입력:";
	std::cin >> phone;

	std::cout << "\n정보 출력\n\n";

	std::cout << "이름 :" << name << "\n전화번호 :" << phone;
}

//1.2test1 덧셈연산
void test1() {
	int a, b;
	std::cout << "첫 번째 숫자 :";
	std::cin >> a;
	std::cout << "두 번째 숫자 :";
	std::cin >> b;
	std::cout << "연산 결과\n\n";
	std::cout << a << '+' << b << '=' << a + b;
}

//1.2test2 구구단
void test2() {
	int dan=0;
	while (dan < 2) {
		std::cout << "단 :";
		std::cin >> dan;
	}
	for (int i = 1; i < 10; i++)
		std::cout << dan << '*' << i << '=' << dan * i << '\n';
}
