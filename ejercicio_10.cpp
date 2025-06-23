#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ordenar(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int moda(int a[], int n) {
    int maxrep=0, res=a[0];
    for(int i=0;i<n;i++) {
        int cont=1;
        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                cont++;
            }
        }
        if(cont>maxrep) {
            maxrep=cont;
            res=a[i];
        }
    }
    return res;
}

int main() {
    int v[30], suma=0;
    float media, mediana;
    int mod;

    srand(time(0));
    for(int i=0;i<30;i++) {
        v[i]=rand()%901+100;
        suma+=v[i];
    }

    cout<<"Numeros generados: ";
    for(int i=0;i<30;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    media=(float)suma/30;

    ordenar(v,30);
    mediana=(v[14]+v[15])/2.0;

    mod=moda(v,30);

    cout<<"Media: "<<media<<endl;
    cout<<"Mediana: "<<mediana<<endl;
    cout<<"Moda: "<<mod<<endl;

    return 0;
}
