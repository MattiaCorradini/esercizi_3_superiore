#include <iostream>
using namespace std;

int n_libri=0;

struct collezione{
    string titolo;
    string autore;
    string anno;
    string editore;
    int prezzo;
};

int menu(){
    cout << "scegli cosa vuoi fare: \n"
            "1)Aggiungere un libro alla collezione. \n"
            "2)Mostrare il numero di libri nella collezione. \n"
            "3)Stampare l'elenco dei libri. \n"
            "4)Stampare l'elenco dei libri raggruppati per autore. \n"
            "5)Stampare i libri che contengono nel titolo una stringa specifica. \n ";
    int n;
    cin>>n;
    return n;
}



int main() {
    int scelta;
    scelta=menu();
    collezione libri[1000];
    while (scelta!=0){

    }
    return 0;
}
