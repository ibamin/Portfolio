#include "Member.h"

SwimMember::SwimMember(const char* name, const char* phone, int id) :Member(name, phone, id) {
	strcpy(this->SwimId, "Swim No.");
	char tmp[20];
	itoa(id, tmp, 10);
	strcat(this->SwimId, tmp);
}
void SwimMember::SetFee() {
	Member::SetFee(Swim_MontlyFee);
}
void SwimMember::ShowMemberShip() {
	SetFee();
	cout << "WellCome To Moble Swimming Pool\n";
	Member::ShowMemeberShip();
	cout << "수영 회원 ID :" << SwimId << '\n';
}