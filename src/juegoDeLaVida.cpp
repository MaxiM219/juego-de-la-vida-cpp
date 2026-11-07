#include <iostream>
using namespace std;
#include "../include/juegoDeLaVida.h"

void celulaNacida(string* matriz, size_t x, size_t y, const std::vector<std::pair<size_t, size_t>>& posiciones){
    for(size_t i = 0; i < posiciones.size(); i++){
        // if (posiciones[i].first < x && posiciones[i].second < y){
            
        // }
        size_t fila = posiciones[i].first;
        size_t columna = posiciones[i].second;
        cout << fila << " " << columna <<endl;
        matriz[fila][columna] = 'x';
    }
}

void celulaMuere();

void celulaVive();