#include <iostream>
using namespace std;
int main() {
    int n,m;
    int maggiore, minore;
    cin >>n >>m;
    if (n-m>0) {
        maggiore = n;
        minore = m;
    }
    else if (n-m<0){
        maggiore=m;
        minore=n;
    }
    for (int i = maggiore; i < minore ; i--) {
        if (i%2==0){
            cout <<i*i;
        }
    }
    return 0;
}
