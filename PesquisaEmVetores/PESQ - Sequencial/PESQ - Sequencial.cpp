#include <iostream>

using namespace std;

bool buscaseq(int *arr, int siz, int x, int &pos) {
    for (int i = 0; i < siz; i++) {
        if (arr[i] == x) {
            return true;
        }
        pos++;
    }
    return false;
}

int main() {
    int *arr = new int[100];
    int x = -23;
    int cont = 0;
    while(x != -1) {
        cin >> x;
        arr[cont] = x;
        cont++;
    }
    cin >> x;
    int pos = 0;
    bool found = buscaseq(arr, cont, x, pos);
    if (found) {
        cout << x << " encontrado na posicao " << pos << endl;
    } else {
        cout << x << " nao encontrado" << endl;
    }

    return 0;
}