#include <iostream>
using namespace std;
int main() {
    float soldi;
    char prodotto;
    int giorni=0;
    int d=0, p=0, t=0, f=0;
    float prezzo_d=1.00, prezzo_p=1.30, prezzo_t=1.50, prezzo_f=2.00;
    cout <<"inserire la quantità di denaro di cui dispone il ragazzo: " <<endl;
    cin >>soldi;
    while(soldi>2.00){
        cout <<"scegliere il prodotto da acquistare: " <<endl;
        cin >>prodotto;
        switch (prodotto) {
            case 'd':
                soldi -= prezzo_d;
                d++;
                break;
            case 'p':
                soldi -= prezzo_p;
                p++;
                break;
            case 't':
                soldi -= prezzo_t;
                t++;
                break;
            case 'f':
                soldi -= prezzo_f;
                f++;
                break;
        }
        giorni++;
    }
    cout <<"al ragazzo sono rimasti " <<soldi <<" euro," <<endl;
    cout <<"ha mangiato per " <<giorni <<" giorni" <<endl;
    cout <<"acquistando: " <<d <<" dolcetti, " <<p <<" pizzette, " <<t <<" toast, " <<"e " <<f <<" focacce." <<endl;
    return 0;
}
