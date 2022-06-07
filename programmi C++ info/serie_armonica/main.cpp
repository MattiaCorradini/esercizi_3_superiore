#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"inserisci la lunghezza: ";
    cin >>n;
    float somma=0;
    for (int i = 1; i <= n ; ++i) {
        somma += 1.0/i;
        cout <<somma <<endl;
    }
    cout <<somma <<endl;
    return 0;
}
