#include "String.h"

void string_test1() {
	string s1 = "abc";
	string s2 = "efg";
	string s3;
	if (s1 != s2) s3 = s1 + s2;
	if (s3 == "abcefg")
		cout << "������ ���ڿ� \n";
	cout << s1 << '\n' << s2 << '\n' << s3;
}

void string_vector_combi() {
	vector<string> v;
	/*v.push_back("������");
	v.push_back("����");
	v.push_back("������");
	v.push_back("����ö");*/
	string input;
	while (cin >> input && input != "����") {
		v.push_back(input);
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "\n";
	}
}