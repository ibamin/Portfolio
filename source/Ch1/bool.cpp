#include "bool.h"
/**
*	bool 매개 변수 num이 양수인지 체크
*/
bool IsPositive(int num) {
	if (num < 0)
		return false;
	return true;
}
/**
*	bool IsPositive을 활용해서 양수인지 음수인지 출력
*/
void exam() {
	bool isPos;
	int num;
	cout << "input number :";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

}