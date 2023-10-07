#include "virtual.h"

point::point(int x, int y) :x(x), y(y){}
void point::show() {
	cout << x << "," << y << '\n';
}

point3D::point3D(int x,int y,int z):point(x,y),z(z){}
void point3D::show() {
	cout << x << "," << y << "," << z << '\n';
}

pointer::pointer(int x,int y):x(x),y(y){}
void pointer::show() {
	cout << "x :" << x << "\ny :" << y << '\n';
}

Circle::Circle(pointer *p, double radius) {
	center = *p;
	this->radius = radius;
}
void Circle::draw() {
	center.show();
	cout << "radius : " << radius << '\n';
}

Triangle::Triangle(pointer *a, pointer *b, pointer *c) :a(*a), b(*b), c(*c) {}
void Triangle::draw() {
	cout << "Triangle \n";
	cout << "First point \n"; a.show();
	cout << "Second point \n"; b.show();
	cout << "Third point \n"; c.show();
}