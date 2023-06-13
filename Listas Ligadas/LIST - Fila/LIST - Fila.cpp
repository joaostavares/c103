#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> fila;

    int x;
    int cont = 0;

    while(cont < 4){
        cin >> x;
        fila.push_back(x);
        cont++;
    }

    while(!fila.empty()){
        cout << *fila.begin() << " ";
        fila.pop_front();
    }

}