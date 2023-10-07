#include "Vector.h"
#include "Card.h"

void func_5_stl_1() {
	vector<int>v;
	for (int i = 0; i < 5; i++)
		v.push_back(i + 1);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ',';
}
void func_iterator() {
	vector<int>v;

	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);

	vector<int>::iterator it;
	it = v.begin();
	while (it != v.end()) {
		cout << *it << ",";
		it++;
	}
}
void func_iterator_char() {
	vector<char> v;
	char a = 'a';
	for (int i = 0; i < 5; i++)
		v.push_back(a + i);
	vector<char>::iterator it = v.begin();
	while (it != v.end()) {
		cout << *it << ' ';
		it++;
	}
}

//card class형태의 vector사용
void func_card() {
	vector<Card> v;
	string input=" ";
	while ( input != "종료") {
		int number = (rand() % 13)+1;
		cout << "모양 :";
		cin >> input;
		v.push_back(Card(number,input));
	}

	vector<Card> ::iterator it = v.begin();
	while (it != v.end()) {
		it->printCard();
		it++;
	}
}