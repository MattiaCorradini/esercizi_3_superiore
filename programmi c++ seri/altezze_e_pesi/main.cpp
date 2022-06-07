#include <iostream>
using namespace std;
int main() {
    int n, peso, altezza, peso_maggiore=0, altezza_maggiore=0, peso_minore=0, altezza_minore=0;
    cin >>n;
    cin >>peso >>altezza;
    if (peso>peso_maggiore)
        peso_maggiore=peso;
    if (altezza>altezza_maggiore)
        altezza_maggiore=altezza;
    for (int i=1; i<n; ++i) {
        cin >>peso >>altezza;
        if (peso>peso_maggiore)
            peso_maggiore=peso;
        else if (peso<peso_maggiore)
            peso_minore=peso;
        if (altezza>altezza_maggiore)
            altezza_maggiore=altezza;
        else if (altezza<altezza_minore)
            altezza_minore=altezza;
    }
    cout <<altezza_maggiore-altezza_minore <<endl <<peso_maggiore-peso_minore <<endl;
    return 0;
}
