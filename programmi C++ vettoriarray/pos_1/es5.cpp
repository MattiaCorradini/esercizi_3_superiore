#include <iostream>
using namespace std;
int main(){
    const int MAX=10;
    int v[MAX];
    for(int i=0;i < MAX;i++){
        v[i]=0;
    }
    int cella;
    cin>>cella;
    v[cella]=1;
    int i=0;
    while(v[i]!=1){
        i++;
    }
    cout<<"l'uno e' nella cella "<<i;
}
