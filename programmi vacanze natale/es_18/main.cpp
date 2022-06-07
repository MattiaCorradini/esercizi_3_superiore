#include <iostream>
using namespace std;
int main() {
    double n,m;
    cin >>n >>m;
    if (n*m<n+m*(10))
        cout <<"la moltiplicazione tra n e m e' inferiore rispetto a 10 volte la loro somma";
    else
        cout <<n*m;
    return 0;
}
