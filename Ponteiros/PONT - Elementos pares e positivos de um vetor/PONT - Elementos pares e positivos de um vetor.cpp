#include <iostream>

using namespace std;

int main() {
    int tamanhoVetor;
    cin >> tamanhoVetor;
    int *ponteiro = new int[tamanhoVetor];
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        cin >> ponteiro[contador];
    }
    int numeroValoresPositivosPares = 0;
    for (int contador = 0; contador < tamanhoVetor; contador++) {
        if (ponteiro[contador] > 0 && ponteiro[contador] % 2 == 0) {
            numeroValoresPositivosPares++;
        }
    }
    cout << numeroValoresPositivosPares << endl;
    delete ponteiro;
    return 0;
}