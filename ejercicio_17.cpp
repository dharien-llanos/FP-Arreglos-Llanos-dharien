#include <iostream>
using namespace std;

bool contiene(char nombre[], char apellido[]) {
    int i=0, j=0;
    while (nombre[i] != '\0') {
        if (nombre[i] == apellido[0]) {
            int k = i;
            j = 0;
            while (nombre[k] == apellido[j] && apellido[j] != '\0') {
                k++;
                j++;
            }
            if (apellido[j] == '\0') {
                return true;
            }
        }
        i++;
    }
    return false;
}

int main() {
    char nombre[100], apellido[50];

    cout << "Ingrese el nombre completo: ";
    cin.getline(nombre, 100);

    cout << "Ingrese el apellido a buscar: ";
    cin.getline(apellido, 50);

    if (contiene(nombre, apellido)) {
        cout << "El apellido pertenece al nombre" << endl;
    } else {
        cout << "El apellido NO pertenece al nombre" << endl;
    }

    return 0;
}
