#pragma once
#include "default_header.h"
#include "student.h"
#include <algorithm>
#include <vector>

class ScoreManager {
	vector<student> student_list;
public:
	ScoreManager();
	void showstudent(int no);
	void showstudent(string name);
	void addstudent();
	void show_student_rank(string name);
	void show_all_student();
	void show_grade_desc();
};