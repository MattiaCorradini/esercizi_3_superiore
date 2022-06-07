#include <iostream>
using namespace std;

int divi(int n) {
    int i=0, j=1;
    while (j<=n) {
        if (n%j==0) {
            i++;
        }
        j++;
    }
    if (i >= 3) {
        cout << "il numero ha 3 divisori diversi tra loro o piu" <<endl;
    } else if (i < 3) {
        cout << "il numero ha meno di 3 divisori" <<endl;
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    cout<<divi(n);
    return 0;
}