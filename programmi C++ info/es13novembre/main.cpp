#include <iostream>
#include <ctime>
using namespace std;
int main() {
    const int MAX = 10;
    srand(time(NULL));
    int numero_da_indovinare = rand()%MAX + 1;
    int tentativo;
    int scelta;
    int numero_tentativi = 1;
    int scommessa;
    cout << "Quanto vuoi scommettere?";
    cin >> scommessa;
    cout << "Indovina il numero che ho pensato: ";
    cin >> tentativo;
    while (tentativo != numero_da_indovinare)
    {
        if (tentativo > numero_da_indovinare)
            cout << "Il numero è troppo grande, riprova" << endl;
        else
            cout << "Il numero è troppo piccolo, riprova" << endl;

        cout << "Indovina il numero che ho pensato: ";
        cin >> tentativo;
        numero_tentativi++;

    }
    cout << endl;
    cout << "Hai usato "<<numero_tentativi<<" tentativi."<<endl;
    if(numero_tentativi<3)
    {
        cout << "Hai vinto la scommessa e hai guadagnato "<<scommessa<<"$";
    }
    else
        cout << "Hai perso la scommessa e "<<scommessa<<"$";
    cout << endl;
    cout << "Vuoi giocare ancora? scrivi 1 se vuoi giocare altrimenti scrivi 0: ";
    cin >> scelta;
    cout << endl;
    while(scelta!=0)
    {
        numero_da_indovinare = rand()%MAX + 1;
        numero_tentativi = 1;
        cout << "Quanto vuoi scommettere?";
        cin >> scommessa;
        cout << "Indovina il numero che ho pensato: ";
        cin >> tentativo;
        while (tentativo != numero_da_indovinare)
        {
            if (tentativo > numero_da_indovinare)
                cout << "Il numero è troppo grande, riprova" << endl;
            else
                cout << "Il numero è troppo piccolo, riprova" << endl;

            cout << "Indovina il numero che ho pensato: ";
            cin >> tentativo;
            numero_tentativi++;
        }
        cout << endl;
        cout << "Hai usato "<<numero_tentativi<<" tentativi."<<endl;
        if(numero_tentativi<3)
        {
            cout << "Hai vinto la scommessa e hai guadagnato "<<scommessa<<"$";
        }
        else
            cout << "Hai perso la scommessa e "<<scommessa<<"$";
        cout << endl;
        cout << "Vuoi giocare ancora? scrivi 1 se vuoi giocare altrimenti scrivi 0: ";
        cin >> scelta;
        cout << endl;
    }
    cout << "Fine del programma";

    return 0;
}
