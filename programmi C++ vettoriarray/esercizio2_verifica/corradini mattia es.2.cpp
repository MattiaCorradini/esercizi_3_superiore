#include <iostream>
using namespace std;

const int DIM=5;

void genera_m (int m[][DIM], int grandezza){
    for (int i = 0; i < grandezza; ++i) {
        for (int j = 0; j < grandezza; ++j) {
            m[i][j]=rand()%10+1;
        }
    }
}

void stampa_m( int m[][DIM], int grandezza){
    for (int i = 0; i < grandezza; ++i) {
        for (int j = 0; j < grandezza; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool verifica_m( int m[][DIM], int grandezza){
    for (int i = 0; i < grandezza; ++i) {
        for (int j = 0; j < grandezza; ++j) {
            if (i%2==0){
                if (m[i][j]%2!=0)
                    return false;
            }
            else{
                if (m[i][j]%2==0)
                    return false;
            }
        }
    }
    return true;
}


int main() {
    int m[DIM][DIM];
    int grandezza;
    cout << "inserisci le dimensioni della matrice, tenendo conto che deve essere un numero minore o uguale a 5" <<endl;
    cin >> grandezza;
    char gioco='q';
    while (gioco=='q') {
        genera_m(m, grandezza);
        stampa_m(m, grandezza);
        if (verifica_m(m, grandezza)==true)
            cout <<"condizione rispettata" <<endl;
        else
            cout<<"condizione non rispettata" <<endl;
        cout<<"per continuare premere q, per terminare premere un qualsiasi altro tasto" <<endl;
        cin>>gioco;
    }
    return 0;
}
