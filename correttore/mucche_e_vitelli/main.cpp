#include <iostream>
using namespace std;
int main() {
    int n, v=0, m=0, peso;
    int somma_v=0, somma_m=0;
    int vitelli=0, mucche=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>peso;
        if (peso<=150){
            v++;
            somma_v+=peso;
            int media_v=somma_v/v;
            if (peso>=media_v){
                vitelli++;
            }
        }
        else{
            m++;
            somma_m++;
            int media_m=somma_m/m;
            if (peso>=media_m){
                mucche++;
            }
        }
    }
    cout <<vitelli <<endl <<mucche <<endl;
    return 0;
}

