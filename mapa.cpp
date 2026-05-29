#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	char  pos [16][16];

	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {
			pos [i][j] = 'x';
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int arvore = rand () % 16;
			int tronco = rand ()% 16;
			pos[arvore][tronco] = 'T';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int fruta = rand () % 15;
			int banana = rand ()% 15;
			pos[fruta][banana] = 'F';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int pedra = rand () % 16;
			int rocha = rand ()% 16;
			pos[pedra][rocha] = 'P';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int animal = rand () % 16;
			int bicho = rand ()% 16;
			pos[animal][bicho] = 'A';
		}
	}
	int user = rand () % 16;
	int gamer = rand ()% 16;
	pos[user][gamer] = '@';

	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {
			cout << "  "  << pos [i][j];
		}
		cout << endl;
	}
	cout << "\n" << pos [user][gamer];
}
