#include <iostream>
#include <cmath>
using namespace std;
int MCD (int m, int n){
    int resto=m%n;
    while (resto!=0){
        resto=m%n;
        m=n;
        n=resto;
    }
    return m;
}

int main() {
    int num, den, mcd;
    cin>>num >>den;
    if (num<=den)
        mcd=MCD(num, den);
    else
        mcd=MCD(den, num);
    if (num%den==0)
        cout <<num/den <<endl;
    else {
        num/=mcd;
        den/=mcd;
        if (num<0^den<0)
            cout<< "-" <<abs(num) << "/" <<abs(den);
        else
            cout<< num << "/" <<den;
    }
    return 0;
}
