#include <iostream>
using namespace std;
int main() {
    int h, k;
    int somma=0, media=0;
    int cont=0;
    cout <<"inserire il primo numero:" <<endl;
    cin >>h;
    cout <<"inserire il secondo numero:" <<endl;
    cin >>k;
    for (int i = h; i < k; ++i) {
        if (i%2!=0){
            somma += (i*i);
        }
        cont++;
    }
    media=somma/cont;
    cout <<"la media dei numeri dispari compresi fra h e k è:" <<media <<endl;
    return 0;
}
