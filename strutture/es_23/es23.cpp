#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("numeri.txt");
    ofstream out("maggiori.txt");
    ofstream out2("minori.txt");
    int m, n;
    cin>>n;
    while(in>>m){
        if (m>n)
            out<<m <<" ";
        if (m<n)
            out2<<m <<" ";
    }
    return 0;
}
