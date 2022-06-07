#include <iostream>
using namespace std;
int main() {
    int p;
    int a;
    int r;
    cout << "inserisci l'ampiezza dell'onda: " << endl;
    cin >> a;
    cout << "inserisci il periodo dell'onda: " << endl;
    cin >> p;
    cout << "inserisci il numero di volte che si vuole ripetere l'onda: " << endl;
    cin >> r;
    cout << "  ";
    for (int i = 0; i < r; ++i) {
        int n_asterischi = p / 2 + 1;
        int spazi = p / 2 - 1;
        for (int j = 0; j < n_asterischi; ++j) {
            cout << "*";
        }
        for (int j = 0; j < spazi; ++j) {
            cout << " ";
        }
        cout << endl;
        for (int i = 0; i < a - 1; ++i) {
            cout << "  ";
            for (int j = 0; j < r * 2; ++j) {
                cout << "*";
                for (int k = 0; k < p / 2 - 1; ++k) {
                    cout << " ";
                }
            }
            cout << endl;
        }

    }
    for (int i = 0; i < p * r + 4; ++i) {
        cout << "*" << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < a - 1; ++i) {
        cout << "  ";
        for (int j = 0; j < r * 2; ++j) {
            cout << "*";
            for (int k = 0; k < p / 2 - 1; ++k) {
                cout << " ";
            }
        }
        cout << endl;
        for (int i = 0; i < r; ++i) {
            int n_asterischi = p / 2 + 1;
            int spazi = p / 2 - 1;
            for (int j = 0; j < n_asterischi; ++j) {
                cout << "*";
            }
            for (int j = 0; j < spazi; ++j) {
                cout << " ";
            }
            cout << endl;
        }
        return 0;
    }
}