#pragma once

#include"basic.h"

void exam1() {
	int num = 20;
	std::cout << "hello world!" << '\n';
	std::cout << "hello" << " world!" << '\n';
	std::cout << "num = " << num << '\n';
	std::cout << 3.14;
}

//1.2 �Է�
void exam2() {
	int val;
	std::cout << "ù ��° ���� �Է� :";
	std::cin >> val;

	int val2;
	std::cout << "�� ��° ���� �Է� :";
	std::cin >> val2;

	std::cout << "�� ������ �� :" << val + val2;
}

//1.2 std���� �����
void exam3() {
	int a, b, result = 0;
	std::cout << "���� 2�� �Է� :";
	std::cin >> a >> b;

	if (a < b)
		for (int i = a + 1; i < b; result += i, i++) {}
	else
		for (int i = b + 1; i < a; result += i, i++) {}
	std::cout << result;
}

//1.2 std ���ڿ� �����
void exam4() {
	char name[100];
	char phone[100];

	std::cout << "�̸� �Է�:";
	std::cin >> name;

	std::cout << "��ȭ��ȣ �Է�:";
	std::cin >> phone;

	std::cout << "\n���� ���\n\n";

	std::cout << "�̸� :" << name << "\n��ȭ��ȣ :" << phone;
}

//1.2test1 ��������
void test1() {
	int a, b;
	std::cout << "ù ��° ���� :";
	std::cin >> a;
	std::cout << "�� ��° ���� :";
	std::cin >> b;
	std::cout << "���� ���\n\n";
	std::cout << a << '+' << b << '=' << a + b;
}

//1.2test2 ������
void test2() {
	int dan=0;
	while (dan < 2) {
		std::cout << "�� :";
		std::cin >> dan;
	}
	for (int i = 1; i < 10; i++)
		std::cout << dan << '*' << i << '=' << dan * i << '\n';
}
