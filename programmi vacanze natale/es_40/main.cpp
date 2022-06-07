#include <iostream>
using namespace std;

float prodotto (float n_1, float n_2){
    float prodotto= n_1*n_2;
    return prodotto;
}

int main() {
    float n_1;
    float n_2;
    cin >>n_1 >>n_2;
    cout <<prodotto(n_1, n_2);
    return 0;
}
