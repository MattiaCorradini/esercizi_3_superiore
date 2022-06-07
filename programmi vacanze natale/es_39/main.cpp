#include <iostream>
using namespace std;

int somma (int n_1, int n_2){
    int somma= n_1+n_2;
    return somma;
}

int main() {
    int n_1, n_2;
    cin >>n_1 >>n_2;
    cout <<somma(n_1, n_2);
    return 0;
}
