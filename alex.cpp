#include <iostream>
#include <cstdlib>

using namespace std;
int main() {

	char  pos [16][16];

	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {         //PREENCHIMENTO DO MAPA
			pos [i][j] = 'x';
		}       // chave for 1
	}       // cheve for 2

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int arvore = rand() % 16;             //SORTEIO DAS ARVORES
			int tronco = rand()% 16;
			pos[arvore][tronco] = 'T';
		}       // chave for 1
	}       // cheve for 2

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int fruta = rand() % 16;
			int banana = rand()% 16;
			pos[fruta][banana] = 'F';
		}       // chave for 1
	}       // cheve for 2

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int pedra = rand() % 16;          //SORTEIO DAS PEDRAS
			int rocha = rand()% 16;
			pos[pedra][rocha] = 'P';
		}  // chave for 1
	}       // cheve for 2

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int animal = rand() % 16;             //SORTEIO DOS ANIMAIS
			int bicho = rand()% 16;
			pos[animal][bicho] = 'A';
		}    // chave for 1
	}       // cheve for 2

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int graveto = rand() % 16;
			int stick = rand()% 16;           // SORTEIO DOS GRAVETOS
			pos[graveto][stick] = 'G';
		} // chave for 1
	}   // cheve for 2

	int user = rand() % 16;     //SORTEIO DO PERSONAGEM
	int gamer = rand()% 16;
	pos[user][gamer] = '@';



	int pedrasnec = 0, arvoresnec = 0, frutasnec = 0, animaisnec = 0, gravetosnec = 0, missao; //VARIÁVEIS
	char movimento, status = 'n', coleta;
	int pedras = 0, arvores = 0, frutas = 0, animais = 0, gravetos = 0;




	cout << "------------------------------------------------------------------------" << endl;
	cout << "               Seja bem-vindo ao Mundo Quadrado!" << endl;

	cout << "\n------------------------------------------------------------------------------------" << endl;
	cout << " Siglas: F: fruta    G: graveto     A: animal    T: tronco/árvore    P: pedras" <<endl;
	cout << "\n O ícone referente ao seu personagem é: @" <<endl;
	cout << "\n------------------------------------------------------------------------------------" << endl;

	cout << "\n  Escolha com cuidado sua aventura no mundo quadrado! " << endl;
	cout << " 1 - Luz e Calor   ";
	cout << "2 - Comida    ";                                       //INICIO
	cout << "3 - Construção" << endl;






	cout << "\n   Escolha sua missão: [1   2   3] : " << endl;
	cin >> missao;

	switch (missao) {
	case 1:
		gravetosnec = 4;
		pedrasnec = 2;
		cout << "\n Na missão Luz e Calor seu objetivo é coletar: 4 gravetos e 2 pedras no mapa! " << endl;
		break;

	case 2:
		frutasnec = 1;
		animaisnec = 3;
		cout << "\n Na missão Comida seu objetivo é coletar: 1 fruta e 3 animais! " << endl;
		break;

	case 3:
		pedrasnec = 8;
		arvoresnec = 4;
		cout << "\n Na missão contrução seu objetivo é coletar: 8 pedras e 4 árvores! " << endl;
		break;

	} //chave switch case missão


	cout << "\n Sua posição atual é: " << user << "-" <<gamer << endl;
	cout << "\n Para se mover user as teclas w [cima] d [direita] s [baixo] a [esquerda]";
	cout << "\n";

	cout << "\n------------------------------------------------------------------------------------" << endl;





	if(missao != 1 && missao != 2 && missao != 3) {
		cout << "Opção inválida! ";    // VERIFICAÇÃO
		return 0;
	} // chave if verificação
	
	
	do {


	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {   //MAPA
			cout << "  "  << pos [i][j];
		} //cheve for 2
		cout << endl;
	} // chave for 1


	cout << "\n------------------------------------------------------------------------------------" << endl;
	cout << "                                Inventário " << endl;
	cout << "\n | Arvores: " << arvores << "         |";
	cout << "\n | Animais: " << animais << "         |";
	cout << "\n | Frutas: " << frutas << "          |";            //INVENTÁRIO
	cout << "\n | Gravetos: " <<gravetos << "        |";
	cout << "\n | Pedras: " << pedras << "          |";

	cout << "\n O status da missão é: " << status << endl;
	
	cout << "\n Faça um movimento: [w (frente) s (atrás)  a (esquerda) d (direita) ";
	cin >> movimento;
	
	pos [user][gamer] = {'x'};      // APAGA A POSIÇÃO ANTERIOR
	
	switch (movimento){
	    case 'w': user -=1; break;
	    case 's': user += 1; break;             //FAZ AS VARIÁVEIS DE LINHA E COLUNA SE ATUALIZARES
	    case 'a': gamer -= 1; break;
	    case 'd': gamer += 1; break;
	}
	
	if (user > 15){user = 15}
	if (user < 0){user = 0}             //NÃO DEIXA O USER SE MOVIMENTAR FORA DO MAPA
	if (gamer > 15) {gamer = 15}
	if (gamer < 0){gamer = 0}
	
	pos [user][gamer] = {'@'};          //REESCREVE O ICONE @ NA NOVA POSIÇÃO DO USER
	
} while (status != 's' && status != 'S');       //CONDIÇÃO
	
	
	
} // chave int main
