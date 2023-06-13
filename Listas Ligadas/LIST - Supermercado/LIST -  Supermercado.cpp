#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> listaVenda, listaEstoque;
    int numeroOperacoes = 0, operacao = 0, produto = 0;
    cin >> numeroOperacoes;
    for(int cont=0; cont<numeroOperacoes; cont++){
        cin >> operacao;
        if(operacao == 1){
            cin >> produto;
            listaEstoque.push_back(produto);
        }
        if(operacao == 2){
            listaVenda.push_front(listaEstoque.front());
            listaEstoque.pop_front();
        }
    }
    cout << "Estoque: ";
    while(!listaEstoque.empty()) {
        cout << listaEstoque.front() << " ";
        listaEstoque.pop_front();
    }
    cout << endl << "Venda: ";
    while(!listaVenda.empty()) {
        cout << listaVenda.front() << " ";
        listaVenda.pop_front();
    }
    cout << endl;
    return 0;
}
