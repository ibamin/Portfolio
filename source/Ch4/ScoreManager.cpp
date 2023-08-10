#include "ScoreManager.h"

void ranking(vector<student>& list,student& newstudent) {
	for (int i = 0; i < list.size(); i++) {
		if (list[i].get_gradeavg() > newstudent.get_gradeavg())
			newstudent.rank++;
		else if (list[i].get_gradeavg() < newstudent.get_gradeavg())
			list[i].rank++;
	}
}

ScoreManager::ScoreManager() {}
void ScoreManager::addstudent() {
	string name;
	int kor, eng, math;
	cout << "이름 :";
	cin >> name;
	cout << "국어 :";
	cin >> kor;
	cout << "영어 :";
	cin >> eng;
	cout << "수학 :";
	cin >> math;
	student newstudent(name, student_list.size()+1, kor, eng, math);
	ranking(student_list,newstudent);
	student_list.push_back(newstudent);
}
void ScoreManager::showstudent(int no) {
	for (int i = 0; i < student_list.size(); i++) {
		if (student_list[i].no == no) {
			student_list[i].showstudentinfo();
			return;
		}
	}
	cout << "원하시는 학번의 학번으로 정보를 찾을 수 없습니다.\n";
}
void ScoreManager::showstudent(string name) {
	for (int i = 0; i < student_list.size(); i++) {
		if (student_list[i].name == name) {
			student_list[i].showstudentinfo();
			return;
		}
	}
	cout << "원하시는 학생의 이름으로 정보를 찾을 수 없습니다.\n";
}
void ScoreManager::show_student_rank(string name) {
	for (int i = 0; i < student_list.size(); i++) {
		if (student_list[i].name == name) {
			student_list[i].showstudentinfo();
			cout << "석차 :" << student_list[i].no << '\n';
		}
	}
}
void ScoreManager::show_all_student() {
	if (student_list.empty()) {
		cout << "학교에 학생이 존재하지 않습니다.\n";
		return;
	}
	for (int i = 0; i < student_list.size(); i++)
		student_list[i].showstudentinfo();
}
void ScoreManager::show_grade_desc() {
	for (int i = 0; i < student_list.size(); i++) {
		for (int j = 0; j < student_list.size(); j++) {
			if (student_list[j].no == (i + 1))
				student_list[j].showstudentinfo();
		}
	}
}