#include <iostream>
#include <cstdlib>
using namespace std;


void mapa() {
	char  pos [15][15];

	for (int i = 0; i <= 14; i++) {
		for (int j = 0; j <= 14; j++) {
			pos [i][j] = 'x';
		}
	}

	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			int arvore = rand () % 15;
			int tronco = rand ()% 15;
			pos[arvore][tronco] = 'A';
		}
	}

	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			int pedra = rand () % 3;
			int rocha = rand ()% 13;
			pos[pedra][rocha] = 'P';
		}
}
		for (int i = 0; i <= 14; i++) {
			for (int j = 0; j <= 14; j++) {
			    cout << pos [i][j];
			}
		cout << endl;
		}
}
		int main() {

			mapa();
		}
