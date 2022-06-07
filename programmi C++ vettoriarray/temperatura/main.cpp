#include <iostream>
using namespace std;
int main() {
    //dichiarazione del vettore
    //prima va il tipo come per le variabili
    //segue il nome con le stesse regole delle variabili
    //infine ci deve essere una coppia di parentesi quadre
    //che contiene la dimensione del vettore
    const int NUM_MESI=12;
    int mm_pioggia[NUM_MESI];
    //input
    for (int i = 0; i < NUM_MESI; ++i) {
        cout <<"inserisci i mm di pioggia del mese " <<i+1 <<endl;
        cin >>mm_pioggia[i];
        //mm_pioggia[i]= rand()%100; //per testarlo alla svelta
    }
    int somma=0;
    for (int i = 0; i < NUM_MESI; ++i) {
        somma+=mm_pioggia[i];
    }
    float media= somma/12.0;
    for (int i = 0; i < NUM_MESI; ++i) {
        if (mm_pioggia[i]>media)
            cout<<"nel mese " <<i+1 <<" ha piovuto piu' della media" <<endl;
    }
    return 0;
}
