#include <iostream>
using namespace std;

void quadrato(int v[],int massimo){
    for(int i=0;i<massimo;i++){
        v[i]=v[i]*v[i];
    }
}

int main(){
    const int MAX=5;
    int v[MAX];
    for(int i=0;i<MAX;i++){
        cout<<"inserisci il valore" <<i <<endl;
        cin>>v[i];
    }
    quadrato(v,MAX);
    for(int i=0;i<MAX;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
