#include <iostream>
#include <ctime>
using namespace std;

void stampa(int v[], int n){
    for (int i = 0; i < n; ++i) {
        cout <<v[i] <<"-";
    }
    cout <<endl;
}

int main() {
    srand(time(NULL));
    const int DIM=30;
    int v1[DIM], v2[DIM];
    for (int i = 0; i < DIM; ++i) {
        v1[i]=rand()%100+1;
    }
    stampa(v1, DIM);
    int j=0, k=DIM-1;
    for (int i = 0; i < DIM; ++i) {
        if (v1[i] % 2 == 0){
            v2[j] = v1[i];
            j++;
        }
        else{
            v2[k]=v1[i];
            k--;
        }
    }
    stampa(v2, DIM);
    return 0;
}
