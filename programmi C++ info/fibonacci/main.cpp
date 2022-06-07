#include <iostream>

using namespace std;

int main() {
    int n;
    int n_1,n_2,attuale;
    n_1=1;
    n_2=0;
    cout << "0->" <<n_2<<endl;
    cout << "1->" <<n_1<<endl;
    for (int i = 2; i <= n ; i++) {
        attuale=n_1 + n_2;
        cout <<i<< " -> " <<attuale <<endl;
        n_2=n_1;
        n_1=attuale;
    }



return 0;
}
