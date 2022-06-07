#include <iostream>
using namespace std;

int lety(int n_1, int n_2, int n_3){
    int massimo=0;
    int minimo=0;
    if (n_1>n_2 && n_1>n_3){
        massimo=n_1;
    }
    else if (n_2>n_1 && n_2>n_3){
        massimo=n_2;
    }
    else if (n_3>n_1 && n_3>n_2){
        massimo=n_3;
    }
    else if (n_1<n_2 && n_1<n_3){
        minimo=n_1;
    }
    else if (n_2<n_1 && n_2<n_3){
        minimo=n_2;
    }
    else if (n_3<n_1 && n_3<n_2){
        minimo=n_3;
    }
    else
        cout <<"i tre numeri sono uguali";

    int diff=massimo-minimo;
    return diff;
}

int main() {
    int n_1, n_2, n_3;
    cin>>n_1 >>n_2 >>n_3;
    cout<<lety(n_1, n_2, n_3) <<endl;
    return 0;
}
