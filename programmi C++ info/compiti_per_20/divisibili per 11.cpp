#include <iostream>
using namespace std;
int main() {
    int n;
    int somma1=0;
    int somma2=0;
    int exp1=1;
    int exp2=0;
    cout <<"inserire il numero da controllare: ";
    cin >>n;
    int m=n;
    int e=n;
    while (m>0){
        m=m%10^exp1;
        exp1+=2;
        somma1=somma1+m;
    }
    while (e>0){
        e=e%10^exp2;
        exp2+=2;
        somma2=somma2+e;
    }
    int diff=somma2-somma1;
            if (diff==0 || diff%11==0){
                cout <<"il numero e' divisibile per 11" <<endl;
            }
            else{
                cout <<"il numero non e' divisibile per 11" <<endl;
            }
    return 0;
}
