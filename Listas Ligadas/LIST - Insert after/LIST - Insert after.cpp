#include <iostream>
#include <list>

using namespace std;
int acharPosicao(list<int> lista, int x) {
    list<int>::iterator p;
    int posicao = -1;
    p = lista.begin();
    for(int cont=0; cont<lista.size(); cont++){
        if(*p==x){
            posicao = cont;
            break;
        }
        p++;
    }
    return posicao;
}

int main() {
    list<int> lista;

    int valor = 0, parametro = 0, valorParaInserir=0;
    while(valor != -1){
        cin >> valor;
        if(valor != -1) {
            lista.push_front(valor);
        }
    }
    cin >> parametro >> valorParaInserir;
    int posicao = acharPosicao(lista, parametro);
    list<int>::iterator p = lista.begin();
    advance(p, posicao+1);
    lista.insert(p, valorParaInserir);
    while(!lista.empty()){
        cout << lista.front() << " ";
        lista.pop_front();
    }
    return 0;
}