#include <iostream>
#include <fstream>
using namespace std;

const int MAX=1000000;

struct acquisto{
    float prezzo;
    int pezzi;
    string nome;
};

int main() {
    ifstream in("file.csv");
    acquisto spesa[MAX];
    int i=0;
    acquisto spesona;
    string riga;
    while (getline(in, riga)){
        int pos=riga.find(',');
        spesa.prezzo[i]=riga.substr(0, pos);

        i++;
    }
    return 0;
}
