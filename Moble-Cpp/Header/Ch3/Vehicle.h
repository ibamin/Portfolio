#pragma once
#include "default_header.h"

class Vehicle {
	char name[50];
public:
	Vehicle();
	Vehicle(const char* name);
	virtual void start() = 0;
	void stop();
};
class car : public Vehicle {
	char carname[50];
public:
	car(const char* name, const char* carname);
	void start();
};
class bike :public Vehicle {
	char bikename[50];
	bool bell;
public:
	bike(const char* bikename,bool bell);
	void start();
	void ringBell();
};

//void Vehicle_Test() {
//	car a("Toyota", "Camry");
//	bike b("Schwinn", true);
//
//	a.start();
//	a.stop();
//
//	b.start();
//	b.stop();
//	b.ringBell();
//}