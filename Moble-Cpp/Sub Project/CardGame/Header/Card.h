#pragma once
#include "default_header.h"

class Card {
	char shape[30];
	int num;
public:
	Card();
	Card(const char* shape, int num);
	void PrintCard();
};