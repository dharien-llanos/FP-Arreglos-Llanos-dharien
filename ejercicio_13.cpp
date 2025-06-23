#include <iostream>
using namespace std;

void mistrcpy(char *str1, char *str2) {
    int i;
    for(i=0; str2[i]!='\0'; i++) {
        str1[i]=str2[i];
    }
    str1[i]='\0';
}

int main() {
    char str1[100], str2[100];

    cout<<"Ingrese cadena para str1: ";
    cin.getline(str1, 100);

    cout<<"Ingrese cadena para str2: ";
    cin.getline(str2, 100);

    cout<<"Antes de copiar:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

    mistrcpy(str1, str2);

    cout<<"Despues de copiar str2 en str1:"<<endl;
    cout<<"str1: "<<str1<<endl;

    return 0;
}
