#include <iostream>
using namespace std;

void colori_stampa (int r, int g, int b){
    int celeste = 255 - r;
    int magenta = 255 - g;
    int giallo = 255 - b;
    cout << "Celeste: " << celeste << endl;
    cout << "Magenta: " << magenta << endl;
    cout << "Giallo: " << giallo << endl;
}

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    colori_stampa(r, g, b);
    return 0;
}

