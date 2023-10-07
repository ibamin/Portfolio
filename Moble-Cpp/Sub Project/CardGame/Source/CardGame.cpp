#include "CardGame.h"

CardGame::CardGame() {
	for (int i = 0; i < 52; i++) {
		if (i < 13) cards[i] = Card("Diamond", i + 1);
		else if (i < 26)cards[i] = Card("Clover", i + 1);
		else if (i < 39) cards[i] = Card("Heart", i + 1);
		else cards[i] = Card("Spade", i + 1);
	}
}

Card CardGame::GetCard(int r) {
	cout << "선택한 카드\n";
	cards[r].PrintCard();
	return cards[r];
}

Card CardGame::GetCard() {
	srand(time(NULL));
	int r = (rand() + 13) % 14;
	cout << "선택된 카드\n";
	cards[r].PrintCard();
	return cards[r];
}

void CardGame::ShowAllCardInfo() {
	for (int i = 0; i < Max_deck; i++) {
		cards[i].PrintCard();
	}
}

void CardGame::shuffle() {
	for (int i = 0; i < 52; i++) {
		int l = rand() % 52;
		int r = rand() % 52;
		swap_card(cards[l], cards[r]);
	}
}

void CardGame::swap_card(Card& a, Card& b) {
	Card tmp = a;
	a = b;
	b = tmp;
}

void CardGame::menu_board() {
	cout << "1.모든 카드 보기 2.카드 섞기 3.카드 선택 4.랜덤으로 받기 5.종료\n";
}