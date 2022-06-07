#include <iostream>
using namespace std;
int main() {
    int n;
    float m;
    float somma, differenza, moltiplicazione, divisione;
    cin >>n >>m;
    somma=n+m;
    differenza=n-m;
    moltiplicazione=n*m;
    divisione=n/m;
    if (somma>=100 && somma<=1000)
        cout <<somma;
    else
        cout <<"" <<endl;
    if (differenza>=100 && differenza<=1000)
        cout <<differenza;
    else
        cout <<"" <<endl;
    if (moltiplicazione>=100 && moltiplicazione<=1000)
        cout <<moltiplicazione;
    else
        cout <<"" <<endl;
    if (divisione>=100 && divisione<=1000)
        cout <<divisione;
    else
        cout <<"" <<endl;
    return 0;
}
