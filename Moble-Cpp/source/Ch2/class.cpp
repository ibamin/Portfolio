#include "class.h"

void MyTv::PowerOnOff() {
	power != power;
}
void MyTv::ChannerUp() {
	channel++;
}
void MyTv::ChannerDown() {
	channel--;
}
void MyTv::Show() {
	cout << "채널 :" << channel << ", 색깔:" << color << '\n';
}
MyTv::MyTv() {}
MyTv::MyTv(const char* str) {
	strcpy(color, str);
}
int  MyTv::GetChannel() {
	return channel;
}
bool MyTv::GetPower() {
	return power;
}
char* MyTv::GetColor() {
	return color;
}
void MyTv::SetChannel(int channel) {
	this->channel = channel;
}
void MyTv::SetPower(bool power) {
	this->power = power;
}
void MyTv::SetColor(const char* str) {
	strcpy(color, str);
}

Student::Student(const char name[],int ban, int no, int kor, int eng, int math) {
	strcpy(this->name, name);
	this->ban = ban; this->no = no; this->kor = kor; this->eng = eng; this->math = math;
}
Student::Student(const char* name, int ban, int no) {
	strcpy(this->name, name);
	this->ban = ban; this->no = no; kor = -1; eng = -1; math = -1;
}
int Student::GetTotal() {
	return kor + eng + math;
}
float Student::GetAverage() {
	return GetTotal() / 3.0;
}

Card::Card(const char shape[], int number) {
	strcpy(this->shape, shape);
	this->number = number;
}
void Card::PrintCard() {
	cout << shape << ", " << number <<'\n';
}
void Card::SetShape(const char shape[]) {
	strcpy(this->shape, shape);
}
void Card::SetNumber(int number) {
	this->number = number;
}
char*Card::GetShape() {
	return shape;
}
int  Card::GetNumber() const{
//	number = 3;  
	return number;
} //const함수에서는 변수의 변환 불가 및 내부에서 const함수만 사용가능

MyCar::MyCar(const char color[], int dorNum) {
	strcpy(this->color, color);
	this->dorNum = dorNum;
}
void  MyCar::ShowCarInfo() {
	cout << "문 개수:" << dorNum << ", 자동차 색깔:" << color << '\n';
}
void  MyCar::SetCarInfo(const char color[], int dorNum) {
	strcpy(this->color,color); this->dorNum = dorNum;
}
char* MyCar::GetColor() {
	return color;
}
int   MyCar::GetdorNum() {
	return dorNum;
}
void  MyCar::SetColor(const char* str) {
	strcpy(this->color, str);
}
void  MyCar::SetdorNum(int num) {
	this->dorNum = num;
}

SimpleClass::SimpleClass() {
	num1 = 0; num2 = 0;
}
SimpleClass::SimpleClass(int n) {
	num1 = n; num2 = 0;
}
SimpleClass::SimpleClass(int n, int m) {
	num1 = n; num2 = m;
}
void SimpleClass::show() const {
	cout << num1 << ' ' << num2 << '\n';
}

Seller::Seller(int Price, int NumOfProduct, int MyMoney) :Price(Price), NumOfProduct(NumOfProduct), MyMoney(MyMoney)
{}
void Seller::ShowSaleResult() {
	cout << "상품 가격 : " << Price << '\n';
	cout << "상품 개수 : " << NumOfProduct << '\n';
	cout << "현금 : " << MyMoney;
}

Person::Person(const char* myname, int age) {
	char* tname = new char[(sizeof(myname) / sizeof(char))+1];
	strcpy(tname, myname);
	this->name = tname;
	this->age = age;
}
Person::~Person() {
	delete this->name;
}
void Person::ShowPersonInfo() {
	cout << "이름 :" << name << '\n';
	cout << "나이 :" << age;
}

void Card_Test() {
	Card a("diamond", 7);
	Card b("heart", 3);
	Card c("clover", 11);
	a.PrintCard(); b.PrintCard(); c.PrintCard();
}
void Student_Test() {
	Student chulsu("철수", 1, 1, 80, 80, 80);
	Student yunghi("영희", 1, 2, 90, 90, 90);
	cout << chulsu.name <<" : 총점 - " << chulsu.GetTotal() << "점, 평균 - " << chulsu.GetAverage() << '\n';
	cout << yunghi.name <<" : 총점 - " << yunghi.GetTotal() << "점, 평균 - " << yunghi.GetAverage() << '\n';
}
void Tv_Test() {
	MyTv t1;
	t1.channel = 7;
	strcpy(t1.color, "white");
	t1.Show();

	MyTv t2;
	t2.channel = 11;
	strcpy(t2.color, "red");
	t2.Show();
}
void Car_Test() {
	MyCar a("red", 4), b("white", 3);
	a.ShowCarInfo();
	b.ShowCarInfo();
}
void SimpleClass_Test() {
	SimpleClass sc1;
	cout <<"sc1 on " << __FUNCTION__ << '\n';
	sc1.show();

	SimpleClass sc2(100);
	cout << "sc2(100) " << __FUNCTION__ << '\n';
	sc2.show();

	SimpleClass sc3(100, 200);
	cout << "sc3(100, 200)on " << __FUNCTION__ << '\n';
	sc3.show();

	SimpleClass* ptr = new SimpleClass;
	cout << "* ptr = new SimpleClass on " << __FUNCTION__ << '\n';
	ptr->show();

	SimpleClass* ptr2 = new SimpleClass();
	cout << "* ptr2 = new SimpleClass() on " << __FUNCTION__ << '\n';
	ptr2->show();
}
void Seller_Test() {
	Seller a(2000, 10, 20000);
	a.ShowSaleResult();
}
void Person_Test() {
	Person person("홍길동", 30);
	person.ShowPersonInfo();
}