#include "trycatch.h"

void func1() {
	int a, b;
	
	cout << "�ΰ��� ���� �Է� :";
	cin >> a >> b;

	try {
		if (b == 0)
			throw b;
		cout << "a/b�� �� : " << a / b << endl;
		cout << "a/b�� ������ :" << a % b << endl;
	}
	catch (int ex) {
		cout << ex << "�Է�." << endl;
		cout << "�Է¿���! �ٽ� ���� �ϼ���." << endl;
	}
}
void func2() {
	int num;
	cin >> num;

	try {
		if (num > 10)
			throw 10;
		else
			throw 'm';
	}
	catch(int num){
		cout << "int�� ���� �߻�" << endl;
	}
	catch (char s) {
		cout << "char�� ���� �߻�" << endl;
	}
}
void func3() {
	try {
		int i = 0;
		while (1) {
			cout << i++ << "��° �Ҵ�\n";
			double(*arr)[10000] = new double[10000][10000];
		}
	}
	catch (bad_alloc ex) {
		cout << ex.what() << "\n";
		cout << "\n\nEnd\n\n";
	}
}