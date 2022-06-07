#include <iostream>
using namespace std;

#define N 3

void resetta(int m[N][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
         m[i][j]=0;
        }
    }
}

char conversione(int n){
    if (n==0)
        return ' ';
    if (n==1)
        return 'X';
    if (n==2)
        return 'O';
}

void stampa_griglia(int m[N][N]){
    for (int i = 0; i < N; ++i) {
        cout<< conversione(m[i][0]) <<" ";
        for (int j = 1; j < N; ++j) {
            cout<<" | " << conversione(m[i][j]) <<" ";
        }
        cout<<endl;
        if (i<2)
            cout<<"------------" <<endl;
    }
}

bool controllo(int m[N][N], int righe, int colonne, int giocatore){
    if (righe<0)
        return false;
    if (righe>=N)
        return false;
    if (colonne<0)
        return false;
    if (colonne>=N)
        return false;
    if (m[righe][colonne]!=0)
        return false;
    m[righe][colonne]=giocatore;
    return true;
}

void cambia_giocatore(int &giocatore){
    if (giocatore==1)
        giocatore=2;
    else
        giocatore=1;
}

bool pareggio (int m[N][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j]==0)
                return false;
        }
    }
    return true;
}

bool vittoria (int m[N][N], int &vincitore){
    for (int i = 0; i < N; ++i) {
        if (m[i][0]==m[i][1] && m[i][1]==m[i][2] && m[i][0]!=0)
            return false;
    }
    for (int i = 0; i < N; ++i) {
        if (m[0][i]==m[1][i] && m[1][i]==m[2][i] && m[0][i]!=0)
            return false;
    }
    if (m[0][0]==m[1][1] && m[1][1]==m[2][2] && m[0][0]!=0)
        return false;
    if (m[0][2]==m[1][1] && m[1][1]==m[2][0] && m[0][2]!=0)
        return false;
    if (pareggio(m)){
        vincitore=0;
        return false;
    }
    return true;
}

int main() {
    int tris[N][N];
    int giocatore=1;
    int vincitore, partite=0;
    while(partite==0){
        cout<<"IL GIOCATORE 1 USA LE 'X' E IL GIOCATORE 2 USA LE 'O'."<<endl;
        resetta(tris);
        stampa_griglia(tris);
        while(vittoria(tris, vincitore)){
            int riga, colonna;
            cout<<"tocca al giocatore "<<giocatore<<endl;
            cout<<"inserisci la riga: ";
            cin>>riga;
            cout<<"inserisci la colonna: ";
            cin>>colonna;
            while(!controllo(tris, riga-1, colonna-1, giocatore)){
                cout<<"hai sbagliato, reinserisci le coordinate." <<endl;
                cout<<"tocca al giocatore "<<giocatore<<endl;
                cout<<"inserisci la riga: ";
                cin>>riga;
                cout<<"inserisci la colonna: ";
                cin>>colonna;
            }
            stampa_griglia(tris);
            cambia_giocatore(giocatore);
        }
        if (vincitore==0)
            cout<<"la partita e' finita in parita'."<<endl;
        else{
            if (giocatore==1)
                vincitore=giocatore+1;
            else if (giocatore==2)
                vincitore=giocatore-1;
            cout<<"il giocatore "<<vincitore<<" ha vinto."<<endl;
        }
        cout<<"per fare un'altra partita premere 0, altrimenti premere un qualsiasi altro numero." <<endl;
        cin>>partite;
    }
    return 0;
}