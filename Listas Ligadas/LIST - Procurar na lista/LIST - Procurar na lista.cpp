#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x) {
    int contador = lista.size();
    list<int>::iterator p;
    bool achou = false;
    p = lista.begin();
    for(int cont=0; cont<contador; cont++){
        if(*p==x){
            achou = true;
            break;
        }
        p++;
    }
    return achou;
}

int main(){
    list<int> lista;
    int x=1, valorParaEncontrar;
    while(x != 0){
        cin >> x;
        if(x != 0) {
            lista.push_front(x);
        }
    }
    cin >> valorParaEncontrar;
    bool resultado = encontrar(lista, valorParaEncontrar);
    if(resultado){
        cout << "Encontrado" << endl;
    }
    else {
        cout << "Nao encontrado" << endl;
    }
    while(!lista.empty()){
        lista.pop_front();
    }
}