#include "bool.h"
/**
*	bool �Ű� ���� num�� ������� üũ
*/
bool IsPositive(int num) {
	if (num < 0)
		return false;
	return true;
}
/**
*	bool IsPositive�� Ȱ���ؼ� ������� �������� ���
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