#include <iostream>
#include <iomanip>

using namespace std;

struct notas {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
};

float media(float &nota1, float &nota2, float &nota3, float &nota4){
    return ((nota1 + nota2 + nota3 + nota4)/4.0);
}

int main() {
    int numeroAlunos;
    double somaMediasTurma = 0.0;
    cin >> numeroAlunos;
    notas *ponteiro = new notas[numeroAlunos];
    for(int contador = 0; contador < numeroAlunos; contador++) {
        cin >> (*ponteiro).nota1;
        cin >> (*ponteiro).nota2;
        cin >> (*ponteiro).nota3;
        cin >> (*ponteiro).nota4;
        (*ponteiro).media = media((*ponteiro).nota1, (*ponteiro).nota2, (*ponteiro).nota3, (*ponteiro).nota4);
        somaMediasTurma += (*ponteiro).media;
    }
    cout << fixed << setprecision(2) << somaMediasTurma/numeroAlunos << endl;
    delete ponteiro;
    return 0;
}