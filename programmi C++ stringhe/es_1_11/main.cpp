#include <iostream>
using namespace std;

void funzione(string parola){
    int contatore;
    char letteramagg, lettera;
    int massimo=-1;
    for (int i = 0; i < parola.size(); ++i) {
        lettera = parola.at(i);
        for (int j = 0; j < parola.size(); ++j) {
            if (parola.at(j) == lettera){
                contatore++;
                if (contatore > massimo){
                    massimo = contatore;
                    letteramagg = lettera;
                }
            }
        }
        contatore = 0;
    }
    cout << letteramagg << " " << massimo << endl;
}

int main() {
    string parola;
    cin>>parola;
    funzione(parola);
    return 0;
}