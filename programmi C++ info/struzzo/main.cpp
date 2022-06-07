#include <iostream>
#include <valarray>
using namespace std;
int main()
{
    int spostamento;
    char direzione;
    int alto, destra;
    cout <<"inserisci lo spostamento: ";
    cin >>spostamento;
    cout <<"inserisci la direzione: ";
    cin >>direzione;
    while (spostamento>=0)
    {
        switch (direzione)
        {
            case 'n':
                alto += spostamento;
                break;
            case 's':
                alto -= spostamento;
                break;
            case 'e':
                destra += spostamento;
                break;
            case 'w':
                destra -= spostamento;
                break;
        }
        cout <<"inserisci lo spostamento: ";
        cin >>spostamento;
        cout <<"inserisci la direzione: ";
        cin >>direzione;
    }
    double risultato = sqrt(pow(alto,2) + pow(destra,2));
    cout <<"la distanza dal punto di partenza vale: " <<risultato <<endl;
    return 0;
}