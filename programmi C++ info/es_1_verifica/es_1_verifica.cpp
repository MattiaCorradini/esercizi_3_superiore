#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, k;
    int media=0, somma=0, numeri=0, quadrato;
    do {
        cout << "Inserisci il numero di partenza: ";
        cin >> h;
        cout << "inserisci il numero finale: ";
        cin >> k;
        cout << endl;
    } while (h==k);
    while (h<k){
        h++;
        if (h%2!=0){
            quadrato=pow(h, 2);
            somma +=quadrato;
            numeri++;
        }
    }
    media = somma / numeri;
    cout << "la somma è: " << somma << endl;
    cout << "la media è: " << media << endl;
    return 0;
}

