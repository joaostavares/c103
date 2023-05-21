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
    int *arr = new int[20];
    int x, y;
    int cont = 0;
    cin >> x;
    while(cont < x) {
        cin >> y;
        arr[cont] = y;
        cont++;
    }
    int buscado;
    cin >> buscado;
    int pos = 0;
    bool found = buscaseq(arr, x, buscado, pos);
    if (found) {
        cout << "Corredor " << pos << endl;
    } else {
        cout << "Nao localizado" << endl;
    }

    return 0;
}
