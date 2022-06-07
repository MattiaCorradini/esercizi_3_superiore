#include <iostream>
#include <ctime>
using namespace std;

const int fiumi=5;
const int citta=10;

void genera_mat (int m[][citta]){
    srand(time(NULL));
    for (int i = 0; i < fiumi; i++) {
        for (int j = 0; j < citta; j++) {
            m[i][j]=rand()%2;
        }
    }
}

void stampa (int m[][citta]){
    for (int i = 0; i < fiumi; i++) {
        for (int j = 0; j < citta; j++) {
            cout<<m[i][j] <<" ";
        }
        cout<<endl;
    }
}

void stampa_bagnate (int city[]){
    for (int i = 0; i < citta; i++) {
        if (city[i]==1)
            cout<< i << " ";
    }
    cout<<endl;
}

void stampa_fiumi (int m[][citta], int citta){
    for (int i = 0; i < citta; i++) {
        if (m[i][citta] == 1)
            cout<< i << " ";
    }
    cout<< endl;
}

void piu_bagnata (int m[][citta]){
    int somma, somma_maggiore=0, citta_bagnata=0;
    for (int i = 0; i < citta; i++) {
        somma=0;
        for (int j = fiumi - 1; j >= 0; j--) {
            somma+=m[j][i];
        }
        if (somma > somma_maggiore){
            somma_maggiore=somma;
            citta_bagnata=i;
        }
    }
    cout<< citta_bagnata<< endl;
}

void piu_3_fiumi (int m[][citta]){
    int somma;
    for (int i = 0; i < citta; i++) {
        somma = 0;
        for (int j = 0; j < fiumi; j++) {
            somma += m[j][i];
        }
        if (somma>3)
            cout<<i <<" ";
    }
}

int main() {
    int m[fiumi][citta];
    genera_mat(m);
    stampa(m);
    int fiume, citta;
    cout<<"Inserire il fiume da controllare: ";
    cin>>fiume;
    stampa_bagnate(m[fiume]);
    cout<<"Inserire la citta' da controllare: ";
    cin>>citta;
    stampa_fiumi(m, citta);
    cout<<"Citta' piu' bagnata: ";
    piu_bagnata(m);
    cout<<"Citta' bagnate da piu' di 3 fiumi: ";
    piu_3_fiumi(m);
    return 0;
}