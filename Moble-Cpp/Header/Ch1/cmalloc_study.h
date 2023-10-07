#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
/* malloc 사용법
 (int*) malloc([변수사이즈])
 int* p = (int*) malloc(4);
 반드시 free를 해주어야함
 동적 할당은 힙에 저장
 스택 : 지역변수 매개변수 할당 밑에서 위로
 힙 : 동적변수 위에서 밑으로
*/

int* auto_malloc_int(int size);

char* auto_malloc_char(int size);

double* auto_malloc_double(int size);
/* 
하나의 정수를 저장하기 위한 동적 메모리할당후 10저장해보기
*/
void int_test();

/*
하나의 문자를 저장 동적 메모리 할당후 'A' 저장
*/
void char_test();

/*
5개의 정수를 저장하기 위한 동적 메모리할당후 3 5개저장해보기
*/
void int_test_five();

/*
이름을 저장하기 위한 동적 메모리할당후 이름저장해보기
*/
void char_test_name();

/*
실수6개를 저장하기 위한 메모리를 malloc으로 할당한 후 사용자에게 5개의 점수를 입력받아
마지막 공간에 평균을 저장
*/
void double_test();

/*
char 20개를 저장할 메모리 할당후 hello cpp를 저장 (malloc,strcpy)활용
*/
void char_test_20();