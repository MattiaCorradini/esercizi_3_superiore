#include <iostream>

using namespace std;
struct Allenatore{
    string nome;
    string cognome;
    int trofei;
};
struct Squadra{
    string nome;
    string colorem;
    int punteggio;
    Allenatore allenatore;
};
void menu(){
    cout<<"1)Inserisci una nuova squadra\n";
    cout<<"2)Visualizza squadre con punti>30\n";
    cout<<"3)Allenatori con almeno 1 trofeo\n";
    cout<<"0)Esci\n";
}
void inserisci_squadre(Squadra &a){
    cout<<"Inserisci il nome della squadra";
    cin>>a.nome;
    cout<<"Inserisci il colore della maglia";
    cin>>a.colorem;
    cout<<"Inserisci il punteggio attuale";
    cin>>a.punteggio;
    cout<<"Inserisci il nome dell'allenatore";
    cin>>a.allenatore.nome;
    cout<<"Inserisci il cognome dell'allenatore";
    cin>>a.allenatore.cognome;
    cout<<"Inserisci i trofei dell'allenatore";
    cin>>a.allenatore.trofei;
};
void classifica(Squadra a[], int N){
    for (int i = 0; i <N ; ++i) {
        if(a[i].punteggio>30)
            cout<<"La squadra del signor : "<<a[i].allenatore.cognome<<" ha piu' di 30 punti \n";
    }
}
int allenatori_vincenti(Squadra a[], int N){
    int trofei=0;
    for (int i = 0; i <N ; ++i) {
        if(a[i].allenatore.trofei>=1){
            trofei++;
        }
    }
    return trofei;
}
int main() {
   const int N=10;
   Squadra fantacalcio[N];
    menu();
    int scelta;
    cin>>scelta;
    int Nsquadre=0;
    while(scelta!=0){
        switch (scelta) {
            case 1:
                inserisci_squadre(fantacalcio[Nsquadre]);
                Nsquadre++;
                break;
            case 2:
                classifica(fantacalcio,Nsquadre);
                break;
            case 3:
                cout<<"Numero di allenatori vincenti = "<<allenatori_vincenti(fantacalcio,Nsquadre)<<endl;
                break;
        }
        menu();
        cin>>scelta;
    }

    return 0;
}

