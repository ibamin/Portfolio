#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
/* malloc ����
 (int*) malloc([����������])
 int* p = (int*) malloc(4);
 �ݵ�� free�� ���־����
 ���� �Ҵ��� ���� ����
 ���� : �������� �Ű����� �Ҵ� �ؿ��� ����
 �� : �������� ������ ������
*/

int* auto_malloc_int(int size);

char* auto_malloc_char(int size);

double* auto_malloc_double(int size);
/* 
�ϳ��� ������ �����ϱ� ���� ���� �޸��Ҵ��� 10�����غ���
*/
void int_test();

/*
�ϳ��� ���ڸ� ���� ���� �޸� �Ҵ��� 'A' ����
*/
void char_test();

/*
5���� ������ �����ϱ� ���� ���� �޸��Ҵ��� 3 5�������غ���
*/
void int_test_five();

/*
�̸��� �����ϱ� ���� ���� �޸��Ҵ��� �̸������غ���
*/
void char_test_name();

/*
�Ǽ�6���� �����ϱ� ���� �޸𸮸� malloc���� �Ҵ��� �� ����ڿ��� 5���� ������ �Է¹޾�
������ ������ ����� ����
*/
void double_test();

/*
char 20���� ������ �޸� �Ҵ��� hello cpp�� ���� (malloc,strcpy)Ȱ��
*/
void char_test_20();