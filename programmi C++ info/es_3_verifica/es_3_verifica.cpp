#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int scelta=0;
    double n_1=0, n_2=0;
    do {
        while (scelta==7 || n_1<=0 || n_2<=0) {
            cout <<"Inserire il primo numero: " << endl;
            cin >>n_1;
            cout <<"Inserire il secondo numero: " << endl;
            cin >>n_2;
            scelta=0;
        }
        cout << "Scegli cosa fare: " << endl;
        cout << "1. Somma" << endl;
        cout << "2. Differenza" << endl;
        cout << "3. Prodotto" << endl;
        cout << "4. Divisione" << endl;
        cout << "5. Elevare a potenza il primo numero con esponente il secondo numero" << endl;
        cout << "6. Radice quadrata di entrambi i numeri" << endl;
        cout << "7. Inserire 2 nuovi numeri" << endl;
        cout << "0. Spegnere la calcolatrice" << endl;
        cin >> scelta;
        switch (scelta) {
            case 0:
                break;
            case 1:
                cout << "La somma è " << n_1+n_2 << endl;
                break;
            case 2:
                if (n_1>n_2) cout << "La differenza è " << n_1-n_2 << endl;
                else cout << "La differenza è " << n_2-n_1 << endl;
                break;
            case 3:
                cout << "Il prodotto è " <<n_1*n_2 << endl;
                break;
            case 4:
                cout << "La divisione è " << n_1/n_2 << endl;
                break;
            case 5:
                cout << "L'elevamento a potenza è " << pow(n_1, n_2) << endl;
                break;
            case 6:
                cout << "La radice quadrata del primo numero è: " << sqrt(n_1) << endl
                     << "La radice quadrata del secondo numero è: " << sqrt(n_2) << endl;
                break;
            default:
                break;
        }
    } while (scelta!=0);
    return 0;
}