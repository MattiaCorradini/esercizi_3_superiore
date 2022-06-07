#include <iostream>

using namespace std;

void input (int v[], int n){
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

void Range (int v[], int n, int min, int max){
    int contatore = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > min && v[i] < max)
            contatore++;
    }
    cout << contatore << endl;
}

int main(){
    const int MAX_VALORE = 1000;
    int v[MAX_VALORE];
    int min, max, n;
    cin >> n >> min >> max;
    input(v, n);
    Range (v, n, min, max);
    return 0;
}
