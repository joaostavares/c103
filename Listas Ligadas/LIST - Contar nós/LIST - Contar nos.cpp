#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista){
    int contador = lista.size();
    return contador;
}


int main() {
    list<int> lista;
    int x=-1;
    while(x != 0){
        cin >> x;
        if(x != 0) {
            lista.push_front(x);
        }
    }
    cout << contar(lista) << endl;

    return 0;
}
