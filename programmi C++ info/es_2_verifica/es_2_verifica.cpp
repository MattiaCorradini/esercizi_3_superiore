#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int lancio;
    int contatore=0;
    while (lancio!=12){
        lancio = (rand()%6+1) + (rand()%6+1);
        cout <<"il lancio ha prodotto il numero: " <<lancio <<endl;
        contatore++;
    }
    if (lancio==12){
        cout <<"hai vinto, è uscita una coppia di 6!" <<endl;
    }
    cout <<"numero di lanci effettuati prima che uscisse una coppia di 6: " <<contatore <<endl;
    return 0;
}










