#include <iostream>
using namespace std;

bool ricerca(int v[], int N, int cercato){
    for (int i = 0; i < N; ++i) {
        if (v[i]==cercato)
            return true;
    }
    return false;
}

int main() {
    const int NUMERI=10;
    int v[NUMERI];
    int n;
    for (int i = 0; i < NUMERI; ++i) {
        v[i]=i*2;
    }
    cout<<"inserisci il numero da cercare: ";
    cin>>n;
    while (n>0){
        if (ricerca(v, NUMERI, n) == true)
            cout <<"il numero e' presente nel vettore" <<endl;
        else
            cout <<"il numero non e' presente nel vettore" <<endl;
        cout<<"inserisci il numero da cercare: ";
        cin>>n;
    }
    return 0;
}