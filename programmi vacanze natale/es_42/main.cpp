#include <iostream>
using namespace std;

int tabellina(int n){
    for (int i = 0; i < 10; ++i) {
        cout <<i*n;
    }
    return 0;
}

int main() {
    int n;
    cin >>n;
    cout <<tabellina(n);
    return 0;
}
