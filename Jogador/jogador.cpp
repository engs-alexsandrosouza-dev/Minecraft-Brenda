#include "jogador.hpp"
#include <cctype>

namespace jogador {

void mover(char comando, int &linha, int &coluna) {
    comando = static_cast<char>(std::tolower(static_cast<unsigned char>(comando)));
    if (comando == 'w') {
        --linha;
    } else if (comando == 's') {
        ++linha;
    } else if (comando == 'a') {
        --coluna;
    } else if (comando == 'd') {
        ++coluna;
    }
}

} 

