//prima parte che include le direttive al processore
//in particolare questa direttiva, la include,
//include le librerie da importare
#include <iostream> //libreria per l'I/O

//riga che aggiungeremo sempre per
// semplificare la scrittura di alcune parti
using namespace std;

//punto dove parte il programma
//il main contiene sempre un blocco di codice
//delimitato dalle parentesi graffe (crtl+alt+maiusc+[])
int main() {
   //dichiarazione delle variabili
    int a;
    float b;
    double c;
    //input della variabile intera
    cout << "inserisci un numero intero: ";
    cin >> a;
    cout << "il numero che hai inserito è il "
       << a << endl;
    //input della variabile float
    cout << "inserisci un numero con virgola: ";
    cin >> b;
    cout << "il numero che hai inserito è il "
       << b << endl;
    return 0;
}
