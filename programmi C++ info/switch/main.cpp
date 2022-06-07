#include <iostream>
using namespace std;
int main()
{
    int mese;
    cout << "inserisci il numero del mese che interessa" <<endl;
    cin >> mese;
    switch (mese)
    {
        case 2:
            cout <<"il mese ha 28 giorni" <<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout <<"il mese ha 30 giorni" <<endl;
            break;
        default:
            cout <<"il mese ha 31 giorni" <<endl;
    }
    return 0;
}
