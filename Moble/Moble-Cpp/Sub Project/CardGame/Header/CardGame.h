#pragma once
#include "Card.h"
#include <stdlib.h>
#define Max_deck 52

class CardGame {
	Card cards[Max_deck];
public:
	CardGame();
	void ShowAllCardInfo();
	Card GetCard(int r);
	Card GetCard();
	void shuffle();
	void menu_board();
	void swap_card(Card& a, Card& b);
};