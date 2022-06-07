#include <iostream>
#include <ctime>
using namespace std;

void Casuali (int v[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        v[i] = rand()%10;
        cout << v[i] << " ";
    }
}

int main() {
    const int MAX_NUMERI = 100;
    int v[MAX_NUMERI];
    int n;
    cin >> n;
    Casuali(v, n);
    return 0;
}