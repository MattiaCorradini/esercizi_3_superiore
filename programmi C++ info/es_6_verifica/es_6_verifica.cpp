#include <iostream>
using namespace std;
int main() {
    int precedente=0;
    int successivo;
    int flag=1;
    int inserimento=0;
    while (flag>0) {
        cout << "inserire un numero: ";
        cin >>successivo;
        if (precedente>=successivo){
            flag=0;
        }
        else{
            precedente=successivo;
        inserimento +=1;
        }
    }
    cout << "il numero di inserimenti prima che la sequenza smettesse di essere crescente è uguale a" <<inserimento;
}
