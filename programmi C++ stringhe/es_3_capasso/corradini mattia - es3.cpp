#include <iostream>
#include <cmath>
using namespace std;

bool controllo_doppie(string s){
    for (int i = 0; i < s.size()-1; ++i) {
        if (s.at(i)==s.at(i+1))
            return true;
    }
    return false;
}

bool controllo_lettere(string s){
    for (int i = 0; i < s.size(); ++i) {
        if ((s.at(i)<'a' && s.at(i)>'z') || (s.at(i)<'A' && s.at(i)>'Z'))
            return false;
        if (!controllo_doppie(s))
            return false;
    }
    return true;
}

int pos_doppia(string s){
    for (int i = 0; i < s.size()-1; ++i) {
        if (s.at(i)==s.at(i+1))
            return i+1 ;
    }
}

char lettera(string s){
    for (int i = 0; i < s.size()-1; ++i) {
        if (s.at(i)==s.at(i+1))
            return s.at(i);
    }
}

int WhereAlpha (char letter){
    string alfabeto="abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < alfabeto.size(); ++i) {
        if (alfabeto.at(i)==letter)
            return i+1;
    }
}

int main() {
    string parola;
    int sottrazione_prima;
    int tentativi=0;
    while (1) {
        cout<<"inserisci la parola: "<<endl;
        cin>>parola;
        if (!controllo_lettere(parola))
            cout<<"la parola non è valida"<<endl;
        int differenza=-1;
        int posizione_doppia=pos_doppia(parola);
        char doppia=lettera(parola);
        int posizione_nell_alfabeto=WhereAlpha(doppia);
        if (tentativi==0)
            sottrazione_prima=abs(posizione_doppia-posizione_nell_alfabeto);
        else
            differenza=abs(posizione_doppia-posizione_nell_alfabeto);
        tentativi++;
        if (tentativi>=20)
            break;
        if (sottrazione_prima==differenza)
            break;
    }
    if (tentativi<20){
        cout<<"Hai fatto "<<tentativi<< " tentativi, e hai vinto!"<<endl;
    } else
        cout<<"Hai fatto "<<tentativi<<" tentativi, Hai perso!"<<endl;
    return 0;
}