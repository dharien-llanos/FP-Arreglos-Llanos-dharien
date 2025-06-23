#include <iostream>
using namespace std;

bool estaOrdenado(int v[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, x[100];
    cout << "cuantos numeros desea ingresar: ";
    cin >> n;

    cout << "ingrese los numeros: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    if(estaOrdenado(x, n)) {
        cout << "si esta ordenado" << endl;
    } else {
        cout << "no esta ordenado" << endl;
    }

    return 0;
}
