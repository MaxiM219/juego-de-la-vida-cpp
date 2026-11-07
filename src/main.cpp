#include <iostream>
#include <vector>
#include <utility>
using namespace std;
#include "../include/juegoDeLaVida.h"

void dibujarMatriz(string* matriz, size_t x, size_t y){
    for(size_t i = 0; i < x; i++){
        for (size_t j = 0; j < y; j++){
            cout << matriz[(i * y) + j] << " ";       
        }
        cout << endl;
    }
}

int main() {

    size_t x, y;
    cout << "Escribe tamanio en x: " << endl;
    cin >> x;
    cout << "Escribe tamanio en y: " << endl;
    cin >> y;

    string matriz[x][y];
    // cout << "Hola mundo" << endl;
    vector<pair<size_t, size_t>> posiciones = {
        {1,2},
        {1,1},
        {2,2}
    };
    // for (size_t i = 0; i < posiciones.size(); i++){
    //     cout << "x: " << posiciones[i].first << " y: " << posiciones[i].second << endl;
    // };

    matriz[1][1] = "s";

    celulaNacida(&matriz[0][0], x, y, posiciones);

    dibujarMatriz(&matriz[0][0], x, y);

    // while (true) {
    //     cout << 
    // }

    return 0;
}

