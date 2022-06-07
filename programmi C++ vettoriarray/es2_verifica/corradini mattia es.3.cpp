#include <iostream>
using namespace std;

const int DIM_MAX=100;

void stampa( int m[][DIM_MAX], int righe, int colonne){
    for (int i = 0; i < righe; ++i) {
        for (int j = 0; j < colonne; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void somma_max(int N,int matrice[][DIM_MAX], int righe, int colonne){
    int somma;
    int somma_magg=0;
    int righe_max;
    for (int i=0; i <righe ; ++i) {
        somma=0;
        for (int j = 0; j <colonne ; ++j) {
            somma+=matrice[i][j];
        }
        if(somma>somma_magg){
            somma_magg=somma;
            righe_max=i;
        }
    }
    cout<<"la somma maggiore e': "<<somma_magg <<endl <<" nella riga: "<<righe_max;
}
int main() {
    int m[DIM_MAX][DIM_MAX];
    cout<<"inserire il numero di righe e colonne desiderato: ";
    int righe,colonne;
    cin>>righe>>colonne;
    for (int i = 0; i <righe ; ++i) {
        for (int j = 0; j <colonne ; ++j) {
            cin>>m[i][j];
        }
    }
    stampa(m, righe, colonne);
    somma_max(DIM_MAX,m,righe,colonne);
    return 0;
}