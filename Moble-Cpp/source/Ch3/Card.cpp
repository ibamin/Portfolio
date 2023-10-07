#include "Card.h"

Card::Card(const char* shape, int n){
	this->num = n;
	strcpy(this->shape, shape);
}
Card::Card(){}
void Card::PrintCard() {
	cout << shape << ":" << num << '\n';
}