#pragma once
#include "Vehicle.h"

Vehicle::Vehicle(const char* name){
	strcpy(this->name, name);
}
Vehicle::Vehicle() {
	strcpy(name, "창업전");
}
void Vehicle::stop() {
	cout << "운행을 멈춥니다\n";
}

car::car(const char* name, const char* carname) :Vehicle(name) {
	strcpy(this->carname, carname);
}
void car::start() {
	cout << "운행을 시작합니다\n" << carname << '\n';
}

bike::bike(const char* bikename,bool bell){
	strcpy(this->bikename, bikename);
	this->bell = bell;
}
void bike::start() {
	cout << "자전거 운행을 시작합니다\n" << bikename << '\n';
}
void bike::ringBell() {
	if (bell) cout << "따르릉 따르릉\n";
	else cout << "벨이 없습니다.\n";
}