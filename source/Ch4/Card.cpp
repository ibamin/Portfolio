#include "Card.h"

Card::Card(int num, string s) {
	this->number = num;
	this->shape = s;
}
void Card::printCard() {
	cout << shape << ':' << number << '\n';
}