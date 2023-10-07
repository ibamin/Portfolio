#pragma once
#include "default_header.h"
#include <stdlib.h>

class Card {
public:
	int number;
	string shape;
	Card(int num, string s);
	void printCard();
};