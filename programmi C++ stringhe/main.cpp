/* È una sequenza di caratteri.
 * Rappresenta parole o frasi del mondo reale.
 * Es. Frasi scritte in un editor di testo, messaggi dei social, un codice sorgente.
 * Siccome il c++ è un c aumentato, convivono al suo interno sia le vecchie stringhe del c, che le nuove stringhe del c++.
 * In c le stringhe sono vettori di caratteri terminati da un carattere speciale (0).
 * Mentre in c++ le stringhe vengono rappresentate son la classe string.
 */

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int LUNGHEZZA=100;
    // Dichiarazione di una stringa C
    char stringa_C[LUNGHEZZA];
    //Dichiarazione di una stringa C++
    string stringaCpp;
    //Inizializzazione di una stringa C
    //Se la variabile esiste già
    strncpy(stringa_C, "ciao", LUNGHEZZA-1);
    //Se invece la variabile non esiste
    char stringaC[] = "ciao";

    //Concatenazione
    char risultato[100];
    char nome[20];
    strncpy(risultato, "ciao ", 99);
    cout<<"inserisci il tuo nome: ";
    cin>>nome;
    strncat(risultato,nome,99);
    cout<<risultato<<endl;

    //Concatenzaione in c++
    string risultatoCpp;
    string nomeCpp;
    cout<<"inserisci il tuo nome: ";
    cin>>nomeCpp;
    risultatoCpp = "ciao " + nomeCpp;
    cout<<risultatoCpp <<endl;
    for (int i = 0; i < 10; ++i) {
        risultatoCpp+= "-" + nomeCpp;
    }
    cout<<risultatoCpp;

    //confronto
    char primaC[]="casa";
    char secondaC[]="albero";
    //se la stringa primaC viene prima della stringa secondaC
    if (strncmp(primaC,secondaC, 100)<0){
        cout<<primaC<<"viene prima di "<<secondaC;
    }
    else if (strncmp(primaC,secondaC, 100)>0){
        cout<<secondaC<<"viene prima di "<<primaC;
    }
    else
        cout<<" sono uguali" <<endl;

    return 0;
}
