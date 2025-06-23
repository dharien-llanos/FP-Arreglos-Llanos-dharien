#include <iostream>
using namespace std;

bool balanceado(char cad[]) {
    int c = 0;
    for(int i = 0; cad[i] != '\0'; i++) {
        if(cad[i] == '(') {
            c++;
        } else if(cad[i] == ')') {
            c--;
            if(c < 0) return false;
        }
    }
    return c == 0;
}

int main() {
    char txt[200];
    cout << "ingrese la cadena: ";
    cin.getline(txt, 200);

    if(balanceado(txt)) {
        cout << "parentesis correctos" << endl;
    } else {
        cout << "parentesis incorrectos" << endl;
    }

    return 0;
}
