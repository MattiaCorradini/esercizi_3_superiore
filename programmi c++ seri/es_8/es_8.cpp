#include <iostream>
using namespace std;
void fattorePrimo (int n){
    int f = 2, maggiore = 0, molti = 0, moltiplicita = 0;
    while (n > 0){
        if (n % f == 0){
            n /= f;
            if (f > maggiore)
                maggiore = f;
            molti++;
            if (molti > moltiplicita)
                moltiplicita = molti;
        }
        else{
            f ++;
            molti = 0;
        }
    }
    cout << maggiore << " " << moltiplicita;
}

int main() {
    int n;
    cin >> n;
    fattorePrimo(n);
    return 0;
}
