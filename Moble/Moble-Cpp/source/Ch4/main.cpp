#include "Data.h"
#include "Vector.h"
#include "String.h"
#include "algorithm.h"
#include "Fileio.h"
#include "trycatch.h"
#include "ScoreManager.h"

void mainboard() {
	cout << "1.데이터 입력 2.입력한 모든 정보 출력 3.이름으로 검색 4.학번으로 검색\n5. 학생석차 보기 6.석차순으로 학생출력";
}
void line_print() {
	cout << "--------------------------------------------------------\n";
}
int main() {
	ScoreManager manager;
	string s;
	int no;
	char menu = ' ';
	
	while ((menu != 'q' || menu != 'Q')) {
		mainboard();
		cout << "\n입력 :";
		cin >> menu;
		if (menu == '1')
			manager.addstudent();
		if (menu == '2') {
			line_print();
			manager.show_all_student();
			line_print();
		}
		if (menu == '3') {
			line_print();
			cout << "이름 :";
			cin >> s;
			manager.showstudent(s);
			line_print();
		}
		if (menu == '4') {
			line_print();
			cout << "학번 :";
			cin >> no;
			manager.showstudent(no);
			line_print();
		}
		if (menu == '5') {
			line_print();
			cout << "이름 :";
			cin >> s;
			manager.show_student_rank(s);
			line_print();
		}
		if (menu == '6') {
			line_print();
			manager.show_grade_desc();
			line_print();
		}
		else {
			cout << "메뉴를 다시 확인해 주십시오.\n";
		}
	}
}