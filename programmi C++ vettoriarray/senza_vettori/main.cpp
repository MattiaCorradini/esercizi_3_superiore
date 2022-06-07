#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >>a >>b >>c >>d;
    float media= (a+b+c+d)/4;
    if (a>media)
        cout <<"gennaio" <<endl;
    if (b>media)
        cout <<"febbraio" <<endl;
    if (c>media)
        cout <<"marzo" <<endl;
    if (d>media)
        cout <<"aprile" <<endl;
    return 0;
}
