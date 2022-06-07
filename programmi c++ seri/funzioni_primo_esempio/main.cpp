#include <iostream>
using namespace std;
float retta(float x, float m, float q){
    float y=m*x+q;
    return y;
}

float potenza_esponente_intera(float base, int esponente){
    float risultato=1;
    for (int i = 0; i < esponente; ++i) {
        risultato*=base;
    }
    return risultato;
}

int main() {
    float y;
    y=retta(0, 3, 2);
    cout <<y <<endl;
    float x=-1;
    while (x<1){
        cout <<retta(x, 3, 2) <<endl;
        x+=0.1;
    }
    potenza_esponente_intera(3,4);
    cout <<"3 elevato alla 4 fa: " <<potenza_esponente_intera;
    float coefficente_angolare, intercetta;
    cout <<"inserisci il coefficente angolare della retta: ";
    cin >>coefficente_angolare;
    cout <<"inserisci l'intercetta della retta: ";
    cin >>intercetta;
    x=-1;
    while (x<1){
        cout <<retta(x, coefficente_angolare, intercetta) <<endl;
        x+=0.1;
    }
    return 0;
}