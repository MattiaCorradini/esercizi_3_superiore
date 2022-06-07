#include <iostream>
using namespace std;
int main() {
    int n,m;
    do{
        cin >>n >>m;
    }while (m<0 || n<0);
    cout <<m+n;
    return 0;
}
