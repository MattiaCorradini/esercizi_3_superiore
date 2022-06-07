#include <iostream>
using namespace std;

void lettere_doppie(string parola) {
    char doppie;
    for (int i = 0; i < parola.size() - 1; ++i) {
        if (parola.at(i) == parola.at(i + 1)) {
            doppie = parola.at(i);
            cout << doppie<<endl;
        }
    }
}

int main() {
    string parola;
    cin>>parola;
    lettere_doppie(parola);
    return 0;
}
