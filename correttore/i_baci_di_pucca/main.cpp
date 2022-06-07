#include <iostream>
using namespace std;
int main() {
    int n, n_baci=0;
    int felice=0, triste=0;
    cin>>n;
    int baci=n_baci;
    for (int i = 0; i < n; ++i) {
        cin>>n_baci;
        if (n_baci>=baci+10){
            felice++;
        }
        else if (n_baci<=baci-10){
            triste++;
        }
        baci=n_baci;
    }
    cout <<felice <<" " <<triste;
    return 0;
}
