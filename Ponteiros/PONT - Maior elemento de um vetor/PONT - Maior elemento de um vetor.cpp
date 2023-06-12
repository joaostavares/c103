#include <iostream>

using namespace std;

int main() {
    int tamanhoVetor;
    cin >> tamanhoVetor;
    int *ponteiro = new int[tamanhoVetor];
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        cin >> ponteiro[contador];
    }
    int maiorValor = ponteiro[0];
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        if (ponteiro[contador] > maiorValor) {
            maiorValor = ponteiro[contador];
        }
    }
    cout << maiorValor << endl;
    delete ponteiro;
    return 0;
}