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
	cout << "�̸� :";
	cin >> name;
	cout << "���� :";
	cin >> kor;
	cout << "���� :";
	cin >> eng;
	cout << "���� :";
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
	cout << "���Ͻô� �й��� �й����� ������ ã�� �� �����ϴ�.\n";
}
void ScoreManager::showstudent(string name) {
	for (int i = 0; i < student_list.size(); i++) {
		if (student_list[i].name == name) {
			student_list[i].showstudentinfo();
			return;
		}
	}
	cout << "���Ͻô� �л��� �̸����� ������ ã�� �� �����ϴ�.\n";
}
void ScoreManager::show_student_rank(string name) {
	for (int i = 0; i < student_list.size(); i++) {
		if (student_list[i].name == name) {
			student_list[i].showstudentinfo();
			cout << "���� :" << student_list[i].no << '\n';
		}
	}
}
void ScoreManager::show_all_student() {
	if (student_list.empty()) {
		cout << "�б��� �л��� �������� �ʽ��ϴ�.\n";
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