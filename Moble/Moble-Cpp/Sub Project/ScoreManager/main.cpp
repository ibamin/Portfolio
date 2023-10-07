#include "Data.h"
#include "Vector.h"
#include "String.h"
#include "algorithm.h"
#include "Fileio.h"
#include "trycatch.h"
#include "ScoreManager.h"

void mainboard() {
	cout << "1.������ �Է� 2.�Է��� ��� ���� ��� 3.�̸����� �˻� 4.�й����� �˻�\n5. �л����� ���� 6.���������� �л����";
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
		cout << "\n�Է� :";
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
			cout << "�̸� :";
			cin >> s;
			manager.showstudent(s);
			line_print();
		}
		if (menu == '4') {
			line_print();
			cout << "�й� :";
			cin >> no;
			manager.showstudent(no);
			line_print();
		}
		if (menu == '5') {
			line_print();
			cout << "�̸� :";
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
			cout << "�޴��� �ٽ� Ȯ���� �ֽʽÿ�.\n";
		}
	}
}