#include <iostream>
#include <list>

using namespace std;

typedef struct{
    string nome;
    double valorDevido;
} Divida;

list<Divida> pago(list<Divida> lista, string nome){
    list<Divida>::iterator p;
    list<int>::iterator p2;
    p = lista.begin();
    list<int> posicoes;
    for(int cont=0; cont<lista.size(); cont++){
        if(p->nome == nome){
            posicoes.push_front(cont);
        }
        p++;
    }
    p2 = posicoes.begin();
    for (int cont = 0; cont < posicoes.size(); cont++){
        p = lista.begin();
        advance(p, *p2);
        lista.erase(p);
        p2++;
    }

    while (!posicoes.empty()){   //só para limpar essa lista auxiliar
        posicoes.pop_front();
    }
    return lista;
}

int main() {
    list<Divida> dividas;
    int numeroOperacoes;
    cin >> numeroOperacoes;
    for (int contador = 0; contador < numeroOperacoes; contador++) {
        Divida divida = *new Divida;
        string nome;
        double valor;
        cin.ignore();
        getline(cin, nome);
        cin >> valor;
        divida.nome = nome;
        divida.valorDevido = valor;
        dividas.push_back(divida);
    }
    string pagador;
    cin.ignore();
    getline(cin, pagador);
    list<Divida> dividasAtualizadas = pago(dividas, pagador);
    while(!dividas.empty()){ //limpando a lista desatualizada
        dividas.pop_front();
    }
    cout << "Lista de Dividas" << endl;
    while(!dividasAtualizadas.empty()){
        cout << dividasAtualizadas.front().nome << endl << dividasAtualizadas.front().valorDevido << endl;
        dividasAtualizadas.pop_front();
    }

    return 0;
}