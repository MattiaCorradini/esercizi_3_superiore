#include <iostream>
using namespace std;
int main() {
    int n, d, i=2;
    cin >>n >>d;
    while(n%i==0 && d%i==0){
        n=n/i;
    }
    return 0;
}
