#include "String.h"

void string_test1() {
	string s1 = "abc";
	string s2 = "efg";
	string s3;
	if (s1 != s2) s3 = s1 + s2;
	if (s3 == "abcefg")
		cout << "동일한 문자열 \n";
	cout << s1 << '\n' << s2 << '\n' << s3;
}

void string_vector_combi() {
	vector<string> v;
	/*v.push_back("이지연");
	v.push_back("노경록");
	v.push_back("김조섭");
	v.push_back("소현철");*/
	string input;
	while (cin >> input && input != "종료") {
		v.push_back(input);
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "\n";
	}
}