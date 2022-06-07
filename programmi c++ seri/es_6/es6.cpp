#include <iostream>
using namespace std;
int cifra_piu_alta(int n){
    int cifra, maggiore=0;
    while (n>0){
        cifra=n%10;
        if (cifra>maggiore)
            maggiore=cifra;
        n = n/10;
    }
    return maggiore;
}

int main() {
    int n;
    cin>>n;
    cout<<cifra_piu_alta(n);
    return 0;
}
