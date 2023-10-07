#pragma once
#include "default_header.h"
#define Swim_MontlyFee 50000
#define Golf_MontlyFee 100000

class Member {
	char name[30];
	char phone[30];
	int MontlyFee=0;
	int id;
public:
	Member(const char* name, const char* phone, int id);
	void SetFee(int n);
	void ShowMemeberShip();
};
class GolfMember : public Member {
	char GolfId[30];
public:
	GolfMember(const char* name, const char* phone, int id);
	void SetFee();
	void ShowMemberShip();
};
class SwimMember : public Member {
	char SwimId[30];
public:
	SwimMember(const char* name, const char* phone, int id);
	void SetFee();
	void ShowMemberShip();
};

//�� Ŭ���� �Լ����� cpp���Ͽ��� �����ؼ� �ؿ� test�Լ� ������
//void class_extend_test() {
//	GolfMember a("NKL", "010-1234-5678", 1);
//	a.ShowMemberShip();
//	cout << "\n\n";
//	SwimMember b("KLN", "010-5678-1234", 2);
//	b.ShowMemberShip();
//}