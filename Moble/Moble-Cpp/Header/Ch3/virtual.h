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
		cout << name << ", " << id << " : �ڹٱ�� ���α׷��� ����" << endl;
	}
};
class Student_C : Student {
public:
	Student_C(const char* name, int id) : Student(name, id) {

	}
	void show_info() const {
		cout << name << ", " << id << " : C/C++ ���α׷��� ����" << endl;
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

//�����Լ� ���� ���� �ڽ��� �θ� �����ϰ� �ִ�. ���� �ڽ��� (�θ�)�ڽ� ������ ���� �θ��
//����ȯ�Ͽ� ����� ���� �ִµ� �̷� �� �Լ��� ����ϸ� �θ��� �Լ��� ���ȴ�. �̷��� �׷��� �ڽ���
// �Լ��� ����Ѵٸ� virtual �Լ��� ����ؾ��Ѵ�.
// 
// ��� : ������ �ڽ� �Լ��� ���Ÿ� �θ� Ŭ������ �Լ��� virtual Ű���� ���
// 
// ���� �����Լ� 
// virtual void [�Լ���]([�Ű�����]) const = 0;
// ���� �����Լ��� ����� �ݵ�� �ڽĵ��� override�� �ؾ��Ѵ�
// 
// �Ϲ� �����Լ��� ���� �����Լ��� ����
// �����Լ� : �ڽĿ��� ���� �ص� �ǰ� ���ص���
// ���� �����Լ� : �ڽĿ��� ������ �����ؾ���
// 
//�� Ŭ���� �Լ����� cpp���Ͽ��� �����ؼ� �ؿ� test�Լ� ������
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
//Student* p1 = (Student*) new Student_C("������", 1);
//p1->show_info();
//
//Student* p2 = (Student*) new Student_Java("������", 2);
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