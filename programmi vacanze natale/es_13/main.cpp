#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >>n >>m;
    if (n>0 && m>0)
        cout <<n <<endl <<m;
    else if (n>0 && m<0)
        cout <<n;
    else if (n<0 && m>0)
        cout <<m;
    else
        cout <<"";
    return 0;
}
