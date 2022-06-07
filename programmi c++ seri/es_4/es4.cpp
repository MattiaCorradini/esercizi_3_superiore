#include <iostream>
using namespace std;
int main() {
    int i=0, j=0;
    int n;
    cin>>n;
    while (j<=n){
        if(n%j==0){
            i++;
        }
    j++;
    }
    if(i>=3){
        cout<<"il numero ha 3 divisori diversi tra loro o più";
    }
    else if (i<3){
        cout<<"il numero ha meno di 3 divisori";
    }
    return 0;
}
