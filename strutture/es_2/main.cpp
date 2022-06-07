#include <iostream>
#include <fstream>
using namespace std;

struct Razionale{
    int numeratore;
    int denominatore;
};

Razionale somma(Razionale a, Razionale b)
{
    Razionale c;
    c.numeratore = a.numeratore*b.denominatore + b.numeratore*a.denominatore;
    c.denominatore = a.denominatore * b.denominatore;
    for (int i = c.numeratore; i > 1 ; --i) {
        if (c.numeratore % i == 0 &&
            c.denominatore % i == 0)
        {
            c.numeratore = c.numeratore / i;
            c.denominatore/= i;
        }
    }
    return c;
}

int main() {
    r
	return 0;
}
