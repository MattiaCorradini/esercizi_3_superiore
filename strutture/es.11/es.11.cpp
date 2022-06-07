#include <iostream>
using namespace std;
struct Acquirente{
    string nome;
    string cognome;
};
struct Auto{
    string marca;
    int cilindrata;
    int anno;
    Acquirente acquirente;

};
void menu(){
    cout<<"1)Inserisci una nuova auto\n";
    cout<<"2)Visualizza propietari macchine cc>1500\n";
    cout<<"3)Immatricalata in un anno preciso\n";
    cout<<"0)Esci\n";
}
void inserimento_automobile(Auto &a){
    cout<<"Inserisci la marca";
    cin>>a.marca;
    cout<<"Inserisci la cilindrata";
    cin>>a.cilindrata;
    cout<<"Inserisci l'anno di immatricolazione";
    cin>>a.anno;
    cout<<"Inserisci il nome";
    cin>>a.acquirente.nome;
    cout<<"Inserisci il cognome";
    cin>>a.acquirente.cognome;
}



int inizializza_esempi(Auto v[]){
    v[0]={
            "Fiat",
            1600,
            2020,
            {
                "Gianni",
                "Morandi",
            }
    };
    v[1]={
            "Audio",
            1600,
            2020,
            {
                    "Fiorella",
                    "Mannoia",
            }
    };
    v[2]={
            "Dacia",
            1600,
            2020,
            {
                    "Gino",
                    "Paoli",
            }
    };
    return 3;
}
void controlla_cc(Auto v[], int N){
    for (int i = 0; i <N ; ++i) {
        if(v[i].cilindrata>1500)
            cout<<v[i].acquirente.nome;
    }
}
int anno_imm(Auto v[],int N, int anni){
    int n=0;
    for (int i = 0; i <N ; ++i) {
        if(v[i].anno==anni){
            n++;
        }
    }
    return n;
}
int main() {
    const int N=10;
Auto autosalone[N];
int scelta;
int macchine_vendute=0;
menu();
cout<<"inserisci la scelta";
cin>>scelta;
while(scelta!=0){
    switch (scelta) {
        case 1:
            inserimento_automobile(autosalone[macchine_vendute]);
            macchine_vendute++;
            break;
        case 2:
            controlla_cc(autosalone,macchine_vendute);
            break;
        case 3:
            int anni;
            cout<<"Inserisci la data di immatricolazione";
            cin>>anni;
            cout<<"Il numero di macchine immatricolate nel "<<anni<<"e' :"<<anno_imm(autosalone,macchine_vendute,anni);
            break;

    }


    menu();
    cout<<"inserisci la scelta";
    cin>>scelta;
}


    return 0;
}

