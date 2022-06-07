#include <iostream>
using namespace std;

int abs(int n){
    if(n<0){
        n=n+(n*(-2));
    }
    else
        n=n;
    return n;
}
int main() {
    int n;
    cin>>n;
    cout<<abs(n) <<endl;
    return 0;
}
