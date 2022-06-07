#include <iostream>
using namespace std;

void stampa (int v[], int n){
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " " ;
    }
    cout << endl;
}

void Scambio (int v[], int n){
    int maggiore = 0, minore = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > maggiore)
            maggiore = i;
        if (v[i] < minore)
            minore = i;
    }
    int min = v[maggiore];
    int max = v[minore];
    v[minore] = min;
    v[maggiore] = max;
    stampa (v, n);
}

void input (int v[], int n){
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

int main() {
    int v[100];
    int n;
    cin >> n;
    input (v, n);
    Scambio (v, n);
    return 0;
}
