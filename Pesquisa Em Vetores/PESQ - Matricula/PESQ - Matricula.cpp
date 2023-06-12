#include <iostream>
#include <vector>

using namespace std;
typedef struct {
    string nome;
    string curso;
    int matricula;
} Aluno;

int buscaseq(vector<Aluno> alunos, int siz, string x) {
    for (int cont = 0; cont < siz; cont++) {
        if(alunos[cont].nome == x){
            return cont;
        }
    }
    return -1;
}

int main() {
    vector<Aluno> alunos;
    int aux, matricula;
    string curso, nome;
    int cont = 0;
    cin >> aux;
    while(cont < aux) {
        Aluno aluno = *new Aluno;
        cin.ignore();
        getline(cin, nome);
        aluno.nome = nome;
        cin >> curso;
        aluno.curso = curso;
        cin >> matricula;
        aluno.matricula = matricula;
        alunos.push_back(aluno);
        cont++;
    }
    string buscado;
    cin.ignore();
    getline(cin, buscado);
    int pos = buscaseq(alunos, aux, buscado);
    if (pos != -1) {
        cout << alunos[pos].nome << endl;
        cout << alunos[pos].curso << endl;
        cout << alunos[pos].matricula << endl;
    } else {
        cout << " Aluno nao localizado" << endl;
    }
    return 0;
}
