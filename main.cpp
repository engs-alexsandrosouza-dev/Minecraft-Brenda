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

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int graveto = rand () % 16;
			int stick = rand ()% 16;
			pos[graveto][stick] = 'G';
		}
	}
	int user = rand () % 16;
	int gamer = rand ()% 16;
	pos[user][gamer] = '@';

	int pedras = 0, arvores = 0, frutas = 0, animais = 0, gravetos = 0, missao;

	cout << "------------------------------------------------------------------------" << endl;
	cout << "               Seja bem-vindo ao Mundo Quadrado!" << endl;

	cout << "\n------------------------------------------------------------------------------------" << endl;
	cout << " Siglas: F: fruta    G: graveto     A: animal    T: tronco/árvore    P: pedras" <<endl;
	cout << "\n O ícone referente ao seu personagem é: @" <<endl;
	cout << "\n------------------------------------------------------------------------------------" << endl;

	cout << "\n  Escolha com cuidado sua aventura no mundo quadrado! " << endl;
	cout << " 1 - Luz e Calor   ";
	cout << "2 - Comida    ";
	cout << "3 - Construção" << endl;
	cout << "   Escolha sua missão: [1   2   3] : " << endl;
	cin >> missao;

	if (missao == 1 || missao == 2 || missao ==3) {

		cout << "\n------------------------------------------------------------------------------------" << endl;

		if (missao == 1) {
			cout << "\n Na missão Luz e Calor seu objetivo é coletar: 4 gravetos e 2 pedras no mapa! " << endl;
		}
		else if (missao == 2) {
			cout << "\n Na missão Comida seu objetivo é coletar: 1 fruta e 3 animais! " << endl;
		}
		else if (missao == 3) {
			cout << "\n Na missão contrução seu objetivo é coletar: 8 pedras e 4 árvores! " << endl;
		}

		cout << "\n Sua posição atual é: " << user << "-" <<gamer << endl;
		cout << "\n Para se mover user as teclas w [cima] d [direita] s [baixo] a [esquerda]";
		cout << "\n";

		cout << "\n------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i <= 15; i++) {
			for (int j = 0; j <= 15; j++) {
				cout << "  "  << pos [i][j];
			}
			cout << endl;
		}
	}
		else {
			cout << "Opção inválida! ";
			return 0;
		}		

    cout << "\n------------------------------------------------------------------------------------" << endl;
    cout << "                                Inventário ";

	}
