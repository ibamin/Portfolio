#pragma once
#include "default_header.h"

//test1
class point {
public:
	int x;
	int y;
	point(int x, int y);
	virtual void show();
};
class point3D :public point {
public:
	int z;
	point3D(int x, int y, int z);
	virtual void show();
}; 

//test2
class Student {
protected:
	char name[30];
	int id;

public:
	Student(const char* name, int id) :id(id) {
		strcpy(this->name, name);
	}

	virtual void show_info() const = 0;
};
class Student_Java : Student {
public:
	Student_Java(const char* name, int id) : Student(name, id) {

	}
	void show_info() const {
		cout << name << ", " << id << " : 자바기반 프로그래밍 수업" << endl;
	}
};
class Student_C : Student {
public:
	Student_C(const char* name, int id) : Student(name, id) {

	}
	void show_info() const {
		cout << name << ", " << id << " : C/C++ 프로그래밍 수업" << endl;
	}
};

//test3
class pointer {
	int x, y;
public:
	pointer(int x = 0, int y = 0);
	void show();
};
class Shape {
public:
	virtual void draw() = 0;
};
class Circle:public Shape {
	pointer center;
	double radius;
public:
	Circle(pointer *p, double radius);
	void draw();
};
class Triangle :public Shape{
	pointer a,b,c;
public:
	Triangle(pointer *a, pointer *b, pointer *c);
	void draw();
};

//가상함수 쓰는 이유 자식은 부모를 포함하고 있다. 가끔 자식을 (부모)자식 과같은 형식 부모로
//형변환하여 사용할 때가 있는데 이럴 때 함수를 사용하면 부모의 함수만 사용된다. 이럴때 그래도 자식의
// 함수를 사용한다면 virtual 함수를 사용해야한다.
// 
// 요약 : 무조건 자식 함수를 쓸거면 부모 클래스의 함수에 virtual 키워드 사용
// 
// 순수 가상함수 
// virtual void [함수명]([매개변수]) const = 0;
// 순수 가상함수를 만들면 반드시 자식들은 override를 해야한다
// 
// 일반 가상함수와 순수 가상함수의 차이
// 가상함수 : 자식에서 구현 해도 되고 안해도됨
// 순수 가상함수 : 자식에서 무조건 구현해야함
// 
//위 클래스 함수들을 cpp파일에서 구현해서 밑에 test함수 돌리기
//void virtual_test() {
//	point* p = new point(3, 5);
//	p->show();
//
//	point3D* p3D = new point3D(1, 2, 3);
//	p3D->show();
//
//	((point*)p3D)->show();
//}
//
//void virtual_test2(){
//Student* p1 = (Student*) new Student_C("제니퍼", 1);
//p1->show_info();
//
//Student* p2 = (Student*) new Student_Java("제니퍼", 2);
//p2->show_info();
//}
//
//void virtual_test3() {
//	double r = 3.5;
//	pointer p(1, 3);
//	Circle c(&p, r);
//	c.draw();
//
//	pointer p1 = { 2,10 };
//	pointer p2 = { 5,5 };
//	pointer p3 = { 10,7 };
//	Triangle t(&p1, &p2, &p3);
//	t.draw();
//}