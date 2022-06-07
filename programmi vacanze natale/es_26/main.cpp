#include <iostream>
using namespace std;
int main() {
    int n,m;
    char maggiore, minore;
    cin >>n >>m;
    if (n-m>0) {
        maggiore = n;
        minore = m;
    }
    else if (n-m<0){
        maggiore=m;
        minore=n;
    }
    for (int i = minore; i < maggiore ; ++i) {
        cout <<i*i;
    }
    return 0;
}

