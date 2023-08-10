#pragma once
#include "default_header.h"

class student {
	int kor, eng, math;
public:
	string name;
	int no,rank;
	student(string name=" ", int no=0, int kor=0, int eng=0, int math=0);
	void showgrade();
	void showstudentinfo();
	int get_gradesum();
	double get_gradeavg();
};