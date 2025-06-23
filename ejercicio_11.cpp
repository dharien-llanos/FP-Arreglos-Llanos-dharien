#include <iostream>
using namespace std;

int main() {
    int n, x[100];
    float sumapositivo=0, sumanegativo=0;

    cout<<"Ingrese cuantos elementos desea ingresar: ";
    cin>>n;

    cout<<"Ingrese los elementos: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>x[i];
        if(x[i]>0) {
            sumapositivo += x[i];
        } else if(x[i]<0) {
            sumanegativo += x[i];
        }
    }

    cout<<"La suma de los numeros positivos es: "<<sumapositivo<<endl;
    cout<<"La suma de los numeros negativos es: "<<sumanegativo<<endl;

    return 0;
}
