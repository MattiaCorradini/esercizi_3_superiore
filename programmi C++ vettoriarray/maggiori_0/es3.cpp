#include <iostream>
using namespace std;
int main(){
    int a[8];
    for(int i=0;i<8;i++){
        do{
            cin>>a[i];
        }while(a[i]<=0);
    }
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
}
