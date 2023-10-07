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
	cout << "���� :" << kor << '\n';
	cout << "���� :" << eng << '\n';
	cout << "���� :" << math << '\n';
}

void student::showstudentinfo() {
	cout << "�̸� :" <<  name << '\n';
	cout << "���� :" << rank << '\n';
	showgrade();
	cout << "���� ���� :" << get_gradesum() << '\n';
	cout << "���� ��� :" << get_gradeavg() << '\n';
}

int student::get_gradesum() {
	return kor + eng + math;
}

double student::get_gradeavg() {
	return get_gradesum() / 3.0;
}