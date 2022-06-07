#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("testo.txt");
    string ricerca, parola;
    cin>>parola;
    int contatore=0, indice=0;
    while (in>>ricerca){
        if(ricerca.find(parola, indice)){
            contatore++;
        }
        indice++;
    }
    cout <<contatore;
    return 0;
}
