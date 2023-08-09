#include "Member.h"

GolfMember::GolfMember(const char* name, const char* phone, int id) :Member(name, phone, id) {
	strcpy(this->GolfId, "Golf No.");
	char tmp[20];
	itoa(id, tmp, 10);
	strcat(this->GolfId, tmp);
}
void GolfMember::SetFee() {
	Member::SetFee(Golf_MontlyFee);
}
void GolfMember::ShowMemberShip() {
	SetFee();
	cout << "WellCome To Moble Golf Field\n";
	Member::ShowMemeberShip();
	cout << "°ñÇÁ È¸¿ø ID :" << GolfId << '\n';
}