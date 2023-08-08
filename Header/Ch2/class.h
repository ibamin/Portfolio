#pragma once
#include "default_header.h"

class MyTv {
public :
	int channel;
	bool power;
	char color[20];
	
	MyTv();
	MyTv(const char* str);
	int GetChannel();
	bool GetPower();
	char* GetColor();
	void SetChannel(int channel);
	void SetPower(bool power);
	void SetColor(const char* str);
	void PowerOnOff();
	void ChannerUp();
	void ChannerDown();
	void Show();
};
class Student {
public:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;

	Student(const char* name, int ban, int no);
	Student(const char name[],int ban = 0, int no = 0, int kor = 0, int eng = 0, int math = 0);
	int GetTotal();
	float GetAverage();
};
class Card {
private:
	char shape[30];
	int number;
public:
	Card(const char shape[], int number);
	void SetShape(const char shape[]);
	void SetNumber(int number);
	char* GetShape();
	int GetNumber()const;
	void PrintCard();
};
class MyCar {
private:
	char color[30];
	int dorNum;
public:
	MyCar(const char color[] = "black", int dorNum=0);
	void SetCarInfo(const char color[],int dorNum);
	void ShowCarInfo();
	char* GetColor();
	int GetdorNum();
	void SetColor(const char* str);
	void SetdorNum(int num);
};
class SimpleClass {
	int num1;
	int num2;
public:
	SimpleClass();
	SimpleClass(int n);
	SimpleClass(int n, int m);
	void show() const;
};
class Seller {
	int Price;
	int NumOfProduct;
	int MyMoney;
public:
	Seller(int Price, int NumOfProduct, int MyMoney);
	void ShowSaleResult();
};
class Person {
	char* name;
	int age;
public:
	Person(const char* myname, int age);
	~Person();
	void ShowPersonInfo();
};

void Card_Test();
void Student_Test();
void Tv_Test();
void Car_Test();
void SimpleClass_Test();
void Seller_Test();
void Person_Test();