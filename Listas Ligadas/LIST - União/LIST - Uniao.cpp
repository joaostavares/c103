#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool jaExiste(int valorValidado, list<int> lista){
    bool found = (find(lista.begin(), lista.end(), valorValidado) != lista.end());
    return found;
}

list<int> getUniao(list<int> lista1, list<int> lista2){
    list<int>::iterator p1 = lista1.begin(), p2 = lista2.begin();
    list<int> lista3;
    for(int contador = 0 ; contador < lista1.size() ; contador++) {
        lista3.push_back(*p1);
        p1++;
    }
    for(int contador = 0 ; contador < lista2.size() ; contador++) {
        if(!jaExiste(*p2, lista3)){
            lista3.push_back(*p2);
        }
        p2++;
    }
    return lista3;
}

int main() {
    list<int> lista1, lista2, lista3;
    int x=-12, y=-12;
    while(x != 0){
        cin >> x;
        if(x != 0) {
            lista1.push_front(x);
        }
    }
    while(y != 0){
        cin >> y;
        if(y != 0) {
            lista2.push_front(y);
        }
    }
    lista3 = getUniao(lista1, lista2);
    lista3.sort();
    while(!lista3.empty()){
        cout << lista3.front() << " ";
        lista3.pop_front();
    }
    return 0;
}