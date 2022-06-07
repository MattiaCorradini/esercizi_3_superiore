#include <iostream>
#include <fstream>
using namespace std;

int trova(string & riga, string & parola){
    int pos=0, conta=0;
    pos=riga.find(parola, pos);
    while (pos>=0){
        conta++;
        pos=riga.find(parola, pos+1);
    }
    return conta;
}

int main() {
    ifstream in("testo.txt");
    string riga;
    string parola;
    getline(cin, parola);
    int contatore=0;
    while (getline(in, riga)){
        contatore+=trova(riga, parola);
    }
    cout<<"nel file la parola: " <<parola <<" si trova " <<contatore <<" volte." <<endl;
    return 0;
}
