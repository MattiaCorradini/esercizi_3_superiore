#include <iostream>
using namespace std;

void inverti (int v[], int n){
    for (int i = 0; i < n/2; ++i) {
        int temp;
        temp = v[i];
        v[i] = v[n-(i+1)];
        v[n-i-1] = temp;
    }
}

void stampa (int v[], int n){
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " " ;
    }
    cout << endl;
}

int main() {
    const int NUMERI = 100;
    int n;
    int v [NUMERI];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        v [i] = i;
    }

    stampa (v, n);
    inverti (v, n);
    stampa (v, n);
    return 0;
}