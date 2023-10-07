#pragma once
#include "default_header.h"

struct point {
	int xpos;
	int ypos;
};

void swap(int* a, int* b); //overloading 
void swap(int& a, int& b); //overloading
void show(int a, int b);
int& RefRetFuncOne(int& ref);
void remind_test1(int& a);
void remind_test2(int& a);
void remind_test3();
char* remind_test4(int size);
point& remind_test5(point &a, point &b);


void remind_test_main1();
void remind_test_main2();
void remind_test_main3();