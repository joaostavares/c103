#include <iostream>

using namespace std;

int potencia(int a, int n){
    if(n==0){
        return 1;
    }
    if(n>0){
        return a * potencia (a, n-1);
    }
}

int main() {
    int a, n;
    cin >> a >> n;
    int resp = potencia(a,n);
    cout << resp << endl;
    return 0;
}