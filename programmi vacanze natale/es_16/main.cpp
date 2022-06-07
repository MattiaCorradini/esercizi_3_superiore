#include <iostream>
using namespace std;
int main() {
    float prezzo, sconto_perc;
    cin >>prezzo >>sconto_perc;
    float sconto=(prezzo/sconto_perc)*100;
    if (prezzo>=50)
        cout <<prezzo-sconto;
    else
        cout <<prezzo;
    return 0;
}
