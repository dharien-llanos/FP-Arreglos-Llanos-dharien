#include <iostream>
using namespace std;

int main() {
    float ventas[12], suma = 0, promedio;
    const char* meses[12] = {
        "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "setiembre", "octubre", "noviembre", "diciembre"
    };

    int cmin = 0, creg = 0, cexc = 0;

    cout << "ingrese las ventas de cada mes del anio 2020:" << endl;
    for(int i = 0; i < 12; i++) {
        cout << meses[i] << ": ";
        cin >> ventas[i];
        suma += ventas[i];
    }

    promedio = suma / 12;

    for(int i = 0; i < 12; i++) {
        float porcentaje = ventas[i] / promedio * 100;

        if(porcentaje < 40) {
            cmin++;
        } else if(porcentaje <= 75) {
            creg++;
        } else {
            cexc++;
        }
    }

    cout << "\npromedio anual de ventas: " << promedio << endl;
    cout << "meses con nivel minimo: " << cmin * 100 / 12 << "%" << endl;
    cout << "meses con nivel regular: " << creg * 100 / 12 << "%" << endl;
    cout << "meses con nivel excelente: " << cexc * 100 / 12 << "%" << endl;

    cout << "\nmeses con ventas excelentes:" << endl;
    for(int i = 0; i < 12; i++) {
        if(ventas[i] > promedio * 0.75) {
            cout << meses[i] << endl;
        }
    }

    return 0;
}