#include <iostream>
using namespace std;
int main() {
    int n, m;
    do{
        cin >>n >>m;
    }while (n<1000000000 && n<2000000000 || m<1000000000 && m<2000000000);
    cout <<m+n <<endl <<m-n <<endl <<m*n;
    return 0;
}
