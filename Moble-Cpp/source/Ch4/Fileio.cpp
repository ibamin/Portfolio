#include "Fileio.h"


void ifstream_test() {
	ifstream in("C:/MyMoble/C++/230810/230810/test.txt");
	string s;

	if (in.is_open()) {
		in >> s;
		cout << "파일에서 받아온 문자열 \n" << s;
	}
	else {
		cout << "파일을 찾을 수 없습니다.";
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
	cout << "파일에 넣을 문자열 :";
	getline(cin, s);
	out << s;
	out.close();
}