#include "CardGame.h"

int main() {
	int menu=0,user;
	CardGame game;
	while ( menu != 5) {
		game.menu_board();
		cin >> menu;
		if (menu == 1)
			game.ShowAllCardInfo();
		if (menu == 2)
			game.shuffle();
		if (menu == 3) {
			cin >> user;
			game.GetCard(user);
		}
		if (menu == 4)
			game.GetCard();
	}
	cout << "��� �ּż� �����մϴ�.";
}