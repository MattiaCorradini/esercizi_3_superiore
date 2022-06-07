#include <iostream>
#include <ctime>
using namespace std;

const int DIM=10;

void genera_vett (int v[]){
    srand(time(NULL));
    for (int i = 0; i < DIM; ++i) {
        v[i]=rand()%10+1;
    }
}

void stampa_vett (int v[], int n){
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " " ;
    }
    cout << endl;
}

int conta_m4 (int v[], int &pos){
    int conta=0;
    for (int i = 0; i < DIM; ++i) {
        if (v[i]%4==0){
            conta++;
            if(conta==1)
                pos=i;
        }
    }
    return conta;
}

void scambia_m4 (int v[], int &pos){
    int temp=v[0];
    v[0]=v[pos];
    v[pos]=temp;
}

int main() {
    int pos=0;
    int v[DIM];
    genera_vett(v);
    stampa_vett(v, DIM);
    cout<<"sono presenti " <<conta_m4(v, pos) <<" multipli di 4" <<endl;
    if (conta_m4(v, pos)>0)
    cout<<"la posizione del primo multiplo di 4 e' " <<pos <<endl;
    scambia_m4(v, pos);
    stampa_vett(v, DIM);
    return 0;
}