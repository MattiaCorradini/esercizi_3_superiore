#include <iostream>
using namespace std;

/*
PRIMO PROGRAMMA: DISEGNA DUE LINEE PERPENDICOLARI

int main() {
    int dimensione;
    char carattere;
    cin >> carattere;
    cin >> dimensione;
    for(int i=0; i<dimensione-1; i++)
    {
        cout<<carattere<<endl;
    }
    for(int j=0; j<dimensione; j++)
    cout<<carattere<<" ";
    return 0;
}

SECONDO PROGRAMMA: DISEGNA UN QUADRATO PIENO

int main() {
    int dimensione;
    char carattere;
    cin >> carattere;
    cin >> dimensione;
    for(int j=0; j<dimensione; j++)
    {
        for(int i=0; i<dimensione; i++)
        {
            cout<<carattere<<" ";
        }
        cout<<endl;
    }
    return 0;
}


int main()
{
    int dimensione;
    char carattere;
    cout <<"inserisci il carattere: " <<endl;
    cin >> carattere;
    cout <<"inserisci la dimensione del quadrato: ";
    cin >> dimensione;
    for(int i=0; i<dimensione; i++)
    {
        cout<<carattere<<" ";
    }
    cout<<endl;
    for(int j=0; j<dimensione-2; j++)
    {
        cout<<carattere;
        for(int k=0; k<dimensione+(dimensione-3); k++)
        {
            cout<<" ";
        }
        cout<<carattere;
        cout<<endl;
    }
    for(int i=0; i<dimensione; i++)
    {
        cout<<carattere<<" ";
    }
    return 0;
}
*/

//dati in input una temperatura e la scala in cui questa è stata misurata
//creare un menù che chieda all'utente in che unità di misura si vuole convertire la T.
//selezionata l'unità di arrivo, mostri a video il risultato della conversione.

int main()
{
    int celsius, farenheit, kelvin, unita_iniziale, unita_finale;
    float T;
    cout <<"inserire un valore della temperatura: " <<endl;
    cin >> T;
    cout <<"inserire l'unità di misura iniziale: " <<endl;
    cin >> unita_iniziale;
    cout <<"inserire l'unità di misura finale: " <<endl;
    cin >> unita_finale;
    switch (T)
    {
        case celsius:
            if (unita_iniziale==celsius && unita_finale==kelvin)
            {
                T += 273
                cout <<T <<endl;
            }
            else if (unita_iniziale==celsius && unita_finale==farenheit)
            {
                T= 1,8*T+32
                cout <<T <<endl;
            }
        case kelvin:
            if (unita_iniziale==kelvin && unita_finale==celsius)
            {
                T -= 273
                cout <<T <<endl;
            }
            if (unita_iniziale==kelvin && unita_finale==farenheit)
            {
                T=
            }
    }


    return 0;
}
