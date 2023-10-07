#include "student.h"

student::student(string name, int no,int kor, int eng, int math) {
	this->name = name;
	this->no = no;
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	this->rank = 1;
}

void student::showgrade() {
	cout << "국어 :" << kor << '\n';
	cout << "영어 :" << eng << '\n';
	cout << "수학 :" << math << '\n';
}

void student::showstudentinfo() {
	cout << "이름 :" <<  name << '\n';
	cout << "석차 :" << rank << '\n';
	showgrade();
	cout << "성적 총합 :" << get_gradesum() << '\n';
	cout << "성적 평균 :" << get_gradeavg() << '\n';
}

int student::get_gradesum() {
	return kor + eng + math;
}

double student::get_gradeavg() {
	return get_gradesum() / 3.0;
}