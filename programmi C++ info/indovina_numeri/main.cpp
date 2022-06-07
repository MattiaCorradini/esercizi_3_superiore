#include <iostream>

using namespace std;

int main() {
    const int MAX = 10000;
    srand(time(NULL));
    int numero_da_indovinare = rand() % MAX + 1;
    int tentativo;
    cout << "indovina il numero che ho pensato: ";
    cin >> tentativo;
    while (tentativo = !numero_da_indovinare)
        if (tentativo > numero_da_indovinare);
    cout << "il nuermo è troppo grande, riprova" << endl;
    else
    cout << "il numero è troppo piccolo, riprova" << endl;
}
    return 0;
}
