#include <iostream>
using namespace std;
int main() {
    int h, n, altezze_pacchi;
    int somma;
    int armadi=0;
    cin >>h;
    cin >>n;
    somma=h;
    for (int i = 0; i < n; ++i) {
        cin>>altezze_pacchi;
        if (altezze_pacchi<=h){
            somma+=altezze_pacchi;
            armadi++;
        }
        somma=h;
    }
    cout <<armadi;
    return 0;
}
