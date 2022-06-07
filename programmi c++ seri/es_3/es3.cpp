#include <iostream>
using namespace std;

int lety_bella(int n_1, int n_2, int n_3){
    int somma=n_1+n_2+n_3;
    int prodotto=n_1*n_2*n_3;
    return prodotto-somma;
}

int main() {
    int n_1,n_2,n_3;
    cin>>n_1 >>n_2 >>n_3;
    cout <<lety_bella(n_1,n_2,n_3);
    return 0;
}
