#include <iostream>
using namespace std;
int main() {
    int n, i=1;
    cin >>n;
    cout <<n <<endl;
    while (n>=0){
        cin >>n;
        cout <<n <<endl;
        i++;
    }
    cout <<"il ciclo ha fatto " <<i <<" giri prima che venisse inserito un numero negativo";
    return 0;
}
