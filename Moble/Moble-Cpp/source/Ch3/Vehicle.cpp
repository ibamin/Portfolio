#pragma once
#include "Vehicle.h"

Vehicle::Vehicle(const char* name){
	strcpy(this->name, name);
}
Vehicle::Vehicle() {
	strcpy(name, "â����");
}
void Vehicle::stop() {
	cout << "������ ����ϴ�\n";
}

car::car(const char* name, const char* carname) :Vehicle(name) {
	strcpy(this->carname, carname);
}
void car::start() {
	cout << "������ �����մϴ�\n" << carname << '\n';
}

bike::bike(const char* bikename,bool bell){
	strcpy(this->bikename, bikename);
	this->bell = bell;
}
void bike::start() {
	cout << "������ ������ �����մϴ�\n" << bikename << '\n';
}
void bike::ringBell() {
	if (bell) cout << "������ ������\n";
	else cout << "���� �����ϴ�.\n";
}