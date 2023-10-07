#include "algorithm.h"

void algorithm_min_element() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back((rand()%10)+1);
	auto it = min_element(v.begin(), v.end());
	cout << *it << '\n';
}
void algorithm_max_element() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back((rand() % 10) + 1);
	auto it = max_element(v.begin(), v.end());
	cout << *it << '\n';
}
void algorithm_find() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back((rand() % 10) + 1);
	auto it = find(v.begin(), v.end(), 3);
	cout << *it << '\n';
}
void algorithm_sort() {
	vector<char>v;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		v.push_back(97+(rand() % 25) + 1);
	sort(v.begin(), v.end());
	for (int i = 0; i < 10; i++) {
		cout << v[i] << ' ';
	}
}

void algorithm_test() {
	vector<string> v;
	string s;
	for (int i = 0; i < 5; i++) {
		cout << "이름 :";
		cin >> s;
		v.push_back(s);
	}

	cout << "\n삭제 할 사람 :";
	cin >> s;
	auto it = find(v.begin(), v.end(), s);
	v.erase(it);
	for (it = v.begin(); it != v.end(); it++) cout << *it << ' ';
}