#include <iostream>
using namespace std;

string inizializza(string s){
    string t;
    t += s.at(0);
    for (int i = 1; i < s.size()-1; ++i) {
        t += '_';
    }
    t += s.at(s.size()-1);
    return t;
}

/**
 * Inserisce la lettera, se indovinata, nelle posizioni corrette all'interno
 * della stringa corrente
 * @param segreta
 * @param corrente
 * @param lettera
 */
bool controlla_parola(string segreta, string &corrente, char lettera){
    bool trovata = false;
    for (int i = 0; i < segreta.size(); ++i) {
        if (segreta.at(i) == lettera) {
            corrente.at(i) = lettera;
            trovata = true;
        }
    }
    return trovata;
}

int main() {
    const int MAX_ERRORI = 7;
    bool indovinata = false;
    int errori = 0;
    cout<<"inserisci la parola da far indovinare: " <<endl;
    string segreta;
    cin>>segreta;
    string corrente = inizializza(segreta);
    string lettere_provate;
    while (!indovinata && errori < MAX_ERRORI){
        //Visualizzazione
        cout << corrente << endl;
        cout << "Finora hai fatto : " << errori << " errori" << endl;
        cout << " e hai provato le seguenti lettere: " << lettere_provate << endl;
        //Input
        cout << "Proponi una lettera: ";
        char lettera;
        cin >> lettera;
        lettere_provate += lettera;
        lettere_provate += ',';
        //Controllo
        bool trovata = controlla_parola(segreta, corrente, lettera);
        if (!trovata){
            errori++;
            cout << "Ahi ahi ahi, hai sbagliato" << endl;
        }
        if (segreta == corrente){
            indovinata = true;
            cout << "hai indovinato la parola " <<corrente;
        }
    }
    if (errori>=MAX_ERRORI)
        cout<<"hai sbagliato troppe volte e hai perso." <<endl;
    return 0;
}
