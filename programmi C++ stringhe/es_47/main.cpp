#include <iostream>
using namespace std;

bool vocale(char c){
    c= tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    return false;
}

int conta_lettere(string s, char c){
    int contatore=0;
    for (int i = 0; i < s.size(); ++i) {
        char lettera_attuale=s.at(i);
        if (c == 'V' && vocale(lettera_attuale))
            contatore++;
        if (c=='C' && !vocale(lettera_attuale))
            contatore++;
    }
    return contatore;
}

int main() {
    cout<<conta_lettere("abete", 'V') <<endl;
    cout<<conta_lettere("aBeTe", 'C') <<endl;
    //altro modo per testare
    cout<<"inserisci una parola" <<endl;
    string parola;
    cin>>parola;
    cout<<"inserisci se vuoi contare le vocali (V) o le consonanti (C): ";
    char scelta;
    cin>>scelta;
    cout<<"risultato: " <<conta_lettere(parola, scelta) <<endl;
    return 0;
}
