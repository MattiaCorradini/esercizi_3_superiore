#include <iostream>
using namespace std;

int numero_parole(string frase){
    int contatore=0;
    for (int i = 0; i < frase.size(); ++i) {
            contatore++;
    }
    return contatore;
}

int main() {
    string frase;
    cin>>frase;
    cout<<numero_parole(frase);
    return 0;
}
