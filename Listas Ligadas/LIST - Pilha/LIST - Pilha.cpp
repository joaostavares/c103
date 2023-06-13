#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> pilha;
    int x;
    int cont = 0;

    while(cont < 4){
        cin >> x;
        pilha.push_front(x);
        cont++;
    }

    while(!pilha.empty()){
        cout << *pilha.begin() << " ";
        pilha.pop_front();
    }
}