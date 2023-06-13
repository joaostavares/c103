#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raizQuadrada(double x, double x0, double e) {
    if (abs(pow(x0,2)-x) <= e) {
        return x0;
    }
    else {
        x0 = ((pow(x0,2)+x)/(2*x0));
        return raizQuadrada(x, x0 ,e);
    }
}

int main() {
    double x, x0, e;
    cin >> x >> x0 >> e;
    cout << fixed << setprecision(4) << raizQuadrada(x, x0, e) << endl;
    return 0;
}
