#include <iostream>

using namespace std;

int main() {
    int tamanhoVetor;
    cin >> tamanhoVetor;
    int *ponteiro = new int[tamanhoVetor];
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        cin >> ponteiro[contador];
    }
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        cout << ponteiro[contador] << " ";
    }
    delete ponteiro;
    return 0;
}