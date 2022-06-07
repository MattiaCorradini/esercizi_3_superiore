#include <iostream>
using namespace std;
int main(){
    float somma=0;
    float voto;
    for (int i=0; i<11; i++) {
        cin>>voto;
        somma+=voto;
    }
    float media=somma/11;
    cout <<media;
    return 0;
}
