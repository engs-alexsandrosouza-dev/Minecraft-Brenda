#include <iostream>
#include <cstdlib>
using namespace std;
int main () {

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

	int pedras = 0, arvores = 0, frutas = 0, animais = 0;

	cout << "------------------------------------------------------------------------" << endl;
	cout << "               Seja bem-vindo ao Mundo quadrado!" << endl;
	cout << "\n O ícone referente ao seu personagem é: @" <<endl;
	cout << "\nEscolha com cuidado sua aventura no mundo quadrado! " << endl;
	cout << "1- Luz e Calor   ";
	cout << "2- Comida    ";
	cout << "3- Construção" << endl;
	cout << "Escolha sua missão: [1   2   3]" << endl;
	cout << "";
	cout << "\n-------------------------------------------------------------------------" << endl;

	cout << "-------------------------------------------------------------------------" << endl;
	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {
			cout << "  "  << pos [i][j];
		}
		cout << endl;
	}
	cout << "\n" << pos [user][gamer];
	cout << "-------------------------------------------------------------------------" << endl;
}
