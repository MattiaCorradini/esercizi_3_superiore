#include <iostream>
using namespace std;

int confronta (int n_1, int n_2){
    if (n_1>n_2){
        return true;
    }
    else
        return false;
}

int main() {
    int n_1, n_2;
    cin >>n_1 >>n_2;
    cout <<confronta(n_1, n_2);
    return 0;
}
