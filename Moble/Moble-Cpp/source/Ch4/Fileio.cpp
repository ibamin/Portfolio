#include "Fileio.h"


void ifstream_test() {
	ifstream in("C:/MyMoble/C++/230810/230810/test.txt");
	string s;

	if (in.is_open()) {
		in >> s;
		cout << "���Ͽ��� �޾ƿ� ���ڿ� \n" << s;
	}
	else {
		cout << "������ ã�� �� �����ϴ�.";
	}
	in.close();
}

void read_all() {
	ifstream in("test.txt");
	string s;

	if (!in.is_open()) {
		cout << "File open error\n";
		return;
	}
	while (!in.eof()) {
		getline(in, s);
		cout << s << '\n';
	}
	in.close();
}

void ofstream_test() {
	ofstream out("test.txt",ios::app);
	string s;
	if (!out.is_open()) {
		cout << "File open Error\n";
		return;
	}
	cout << "���Ͽ� ���� ���ڿ� :";
	getline(cin, s);
	out << s;
	out.close();
}