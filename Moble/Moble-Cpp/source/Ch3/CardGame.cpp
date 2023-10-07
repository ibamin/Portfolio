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
	cout << "������ ī��\n";
	cards[r].PrintCard();
	return cards[r];
}

Card CardGame::GetCard() {
	srand(time(NULL));
	int r = (rand() + 13) % 14;
	cout << "���õ� ī��\n";
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
	cout << "1.��� ī�� ���� 2.ī�� ���� 3.ī�� ���� 4.�������� �ޱ� 5.����\n";
}