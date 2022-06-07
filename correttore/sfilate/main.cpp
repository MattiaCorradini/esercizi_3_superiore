#include <iostream>
using namespace std;

int maggiore(int vestito[], int n){
    int massimo=vestito[0];
    for (int i = 0; i < n; ++i) {
        if (vestito[i]>massimo){
            massimo=vestito[i];
        }
    }
    return massimo;
}

int main() {
    const int DIM = 100;
    int vestito[DIM];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>vestito[i];
    }
    for (int i = 0; i < n; ++i) {
        if (vestito[i]==maggiore(vestito, n)) {
            cout<<i+1 <<endl;
        }
    }
    return 0;
}