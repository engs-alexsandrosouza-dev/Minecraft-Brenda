#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));

    const int LIN = 15;
    const int COL = 15;

    char mapa[LIN][COL];

    int px = 0;
    int py = 0;

    int gravetos = 0;
    int pedras = 0;
    int frutas = 0;
    int animais = 0;
    int arvores = 0;

    int objetivo;

    cout << "===== MUNDO QUADRADO =====\n\n";

    cout << "Escolha um objetivo:\n";
    cout << "1 - Luz e calor\n";
    cout << "2 - Comida\n";
    cout << "3 - Construcao\n";
    cin >> objetivo;

    // GERAR MAPA
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {

            int sorteio = rand() % 100;

            if (sorteio < 15) {
                mapa[i][j] = 'G'; // graveto
            }
            else if (sorteio < 30) {
                mapa[i][j] = 'P'; // pedra
            }
            else if (sorteio < 40) {
                mapa[i][j] = 'F'; // fruta
            }
            else if (sorteio < 50) {
                mapa[i][j] = 'A'; // animal
            }
            else if (sorteio < 65) {
                mapa[i][j] = 'T'; // arvore
            }
            else {
                mapa[i][j] = '.'; // vazio
            }
        }
    }

    mapa[px][py] = 'X';

    bool venceu = false;

    while (venceu == false) {

        system("cls");

        // MOSTRAR MAPA
        for (int i = 0; i < LIN; i++) {
            for (int j = 0; j < COL; j++) {
                cout << mapa[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\n===== INVENTARIO =====\n";
        cout << "Gravetos: " << gravetos << endl;
        cout << "Pedras: " << pedras << endl;
        cout << "Frutas: " << frutas << endl;
        cout << "Animais: " << animais << endl;
        cout << "Arvores: " << arvores << endl;

        cout << "\nMovimentos:\n";
        cout << "W - cima\n";
        cout << "S - baixo\n";
        cout << "A - esquerda\n";
        cout << "D - direita\n";

        char mov;
        cin >> mov;

        mapa[px][py] = '.';

        // MOVIMENTACAO
        if (mov == 'w' || mov == 'W') {
            if (px > 0) {
                px--;
            }
        }
        else if (mov == 's' || mov == 'S') {
            if (px < LIN - 1) {
                px++;
            }
        }
        else if (mov == 'a' || mov == 'A') {
            if (py > 0) {
                py--;
            }
        }
        else if (mov == 'd' || mov == 'D') {
            if (py < COL - 1) {
                py++;
            }
        }

        // VERIFICAR ITEM
        if (mapa[px][py] == 'G') {

            char escolha;
            cout << "\nEncontrou um graveto. Coletar? (s/n): ";
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') {
                gravetos++;
                mapa[px][py] = '.';
            }
        }

        else if (mapa[px][py] == 'P') {

            char escolha;
            cout << "\nEncontrou uma pedra. Coletar? (s/n): ";
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') {
                pedras++;
                mapa[px][py] = '.';
            }
        }

        else if (mapa[px][py] == 'F') {

            char escolha;
            cout << "\nEncontrou uma fruta. Coletar? (s/n): ";
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') {
                frutas++;
                mapa[px][py] = '.';
            }
        }

        else if (mapa[px][py] == 'A') {

            char escolha;
            cout << "\nEncontrou um animal. Coletar? (s/n): ";
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') {
                animais++;
                mapa[px][py] = '.';
            }
        }

        else if (mapa[px][py] == 'T') {

            char escolha;
            cout << "\nEncontrou uma arvore. Coletar? (s/n): ";
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') {
                arvores++;
                mapa[px][py] = '.';
            }
        }

        mapa[px][py] = 'X';

        // CONDICOES DE VITORIA

        if (objetivo == 1) {

            if (gravetos >= 4 && pedras >= 2) {
                venceu = true;
            }
        }

        else if (objetivo == 2) {

            if (frutas >= 1 && animais >= 3) {
                venceu = true;
            }
        }

        else if (objetivo == 3) {

            if (pedras >= 8 && arvores >= 4) {
                venceu = true;
            }
        }
    }

    cout << "\nPARABENS! OBJETIVO CONCLUIDO!\n";

    return 0;
}
