#include "Member.h"

Member::Member(const char* name, const char* phone, int id) {
	strcpy(this->name, name);
	strcpy(this->phone, phone);
	this->id = id;
	MontlyFee = 0;
}
void Member::SetFee(int n) {
	this->MontlyFee = n;
}
void Member::ShowMemeberShip() {
	cout << "���� :" << name << "\n����ó :" << phone << "\n��ȸ�� :" << MontlyFee << '\n';
}