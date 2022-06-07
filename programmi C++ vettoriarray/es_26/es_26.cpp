#include <iostream>
using namespace std;

int codice_a_barre(int v[]){
    int somma_dispari=0, somma_pari=0;
    for (int i = 0; i < 12; ++i) {
        if (v[i]%2!=0) {
            somma_dispari += v[i];
        }
        else if (v[i]%2==0){
            somma_pari+= v[i];
        }
    }
    int somma=somma_pari+somma_dispari;
    return somma%10;
}

int main() {
    int v[13];
    for (int i = 0; i < 12; ++i) {
        cin>>v[i];
    }
    v[12]= codice_a_barre(v);
    cout <<v[12];
    return 0;
}
