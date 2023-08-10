#include "trycatch.h"

void func1() {
	int a, b;
	
	cout << "두개의 숫자 입력 :";
	cin >> a >> b;

	try {
		if (b == 0)
			throw b;
		cout << "a/b의 몫 : " << a / b << endl;
		cout << "a/b의 나머지 :" << a % b << endl;
	}
	catch (int ex) {
		cout << ex << "입력." << endl;
		cout << "입력오류! 다시 실행 하세요." << endl;
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
		cout << "int형 예외 발생" << endl;
	}
	catch (char s) {
		cout << "char형 예외 발생" << endl;
	}
}
void func3() {
	try {
		int i = 0;
		while (1) {
			cout << i++ << "번째 할당\n";
			double(*arr)[10000] = new double[10000][10000];
		}
	}
	catch (bad_alloc ex) {
		cout << ex.what() << "\n";
		cout << "\n\nEnd\n\n";
	}
}