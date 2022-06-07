#include <iostream>
using namespace std;

const int N=3;

void resetta(int m[][N], int r){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j]=0;
        }
    }
}

char mappa(int n){
    if(n==0)
        return ' ';
    if (n==1)
        return 'O';
    if (n==2)
        return 'X';
    return 0;
}

void stampa(int m[][N], int r){
    for (int i = 0; i < r; ++i) {
        cout<<mappa(m[i][0]) <<" ";
        for (int j = 1; j < N; ++j) {
            cout<<" | " <<mappa(m[i][j]) <<" ";
        }
        cout<<endl;
        if (i<2)
            cout<<"------------" <<endl;
    }
}

bool inserisci(int m[][N], int r, int riga, int colonna, int giocatore){
    if (riga<0)
        return false;
    if (riga>=r)
        return false;
    if (colonna<0)
        return false;
    if (colonna>=N)
        return false;
    if (m[riga][colonna]!=0)
        return false;
    m[riga][colonna]=giocatore;
    return true;
}

void cambia_giocatore(int &giocatore){
    if(giocatore==1)
        giocatore=2;
    else
        giocatore=1;
}

bool pareggio(int t[][3]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<3; j++) {
            if (t[i][j] == 0)
                return false;
        }
    }
    return true;
}

bool vittoria(int t[][N], int &vincitore){
    for (int i = 0; i < N; ++i) {
        if (t[i][0]==t[i][1] && t[i][1]==t[i][2] && t[i][0]!=0)
            return false;
    }
    for (int i = 0; i < N; ++i) {
        if (t[0][i]==t[1][i] && t[1][i]==t[2][i] && t[0][i]!=0)
            return false;
    }
    if (t[0][0]==t[1][1] && t[1][1]==t[2][2] && t[0][0]!=0)
        return false;
    if (t[0][2]==t[1][1] && t[1][1]==t[2][0] && t[0][2]!=0)
        return false;
    if (pareggio(t)){
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
        cout<<"IL GIOCATORE 1 GIOCA CON IL SIMBOLO 0, IL GIOCATORE 2 CON IL SIMBOLO X" <<endl;
        resetta(tris, N);
        stampa(tris, N);
        while(vittoria(tris, vincitore)){
            int riga, colonna;
            cout<<"giocatore " <<giocatore <<" tocca a te" <<endl;
            cout<<"inserisci la riga:";
            cin>>riga;
            cout<<"inserisci la colonna:";
            cin>>colonna;
            while(!inserisci(tris, N, riga - 1, colonna - 1, giocatore)){
                cout<<"hai sbagliato, rifai" <<endl;
                cout<<"inserisci la riga:";
                cin>>riga;
                cout<<"inserisci la colonna:";
                cin>>colonna;
            }
            stampa(tris, N);
            cambia_giocatore(giocatore);
        }
        if (vincitore==0)
            cout<<"partita finita in parità" <<endl;
        else{
            if (giocatore==1)
                vincitore=giocatore+1;
            else if (giocatore==2)
                vincitore=giocatore-1;
            cout<<"il giocatore " <<vincitore <<" ha vinto" <<endl;
        }
        cout<<"per continuare premere 0, per terminare premere un qualsiasi altro numero." <<endl;
        cin>>partite;
    }
    return 0;
}
