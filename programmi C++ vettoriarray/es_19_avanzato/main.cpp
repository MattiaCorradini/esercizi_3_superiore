#include <iostream>
using namespace std;
int main() {
    const int N=10;
    float valori[N], medie[N];
    int k=5;
    //cout<<"inserire i numeri da mediare: " <<endl;
    //cin>>k;
    for (int i = 0; i < N; ++i) {
        cout<<"inserisci il dato: " <<endl;
        cin>>valori[i];
    }
    medie[0]=((valori[0]*(k/2+1))+(valori[0]+k/2))/k;
    medie[1]=((valori[1]-(k/2-1)*2)+valori[1]+(valori[1]-k/2))/k;
    for (int i = k/2+1; i < N-(k/2+1); ++i) {
        medie[i]=(valori[i-k/2]+valori[i]+valori[i+k/2])/k;
    }
    valori[8]=((valori[8]-k/2)+valori[8]+(valori[8]+((k/2-1)*2)))/k;
    valori[9]=((valori[9]-k/2)+(valori[9]*k/2+1));
    for (int i = 0; i < N; ++i) {
       cout <<medie[i] <<" - ";
    }
    return 0;
}