#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("input.txt");
    ofstream out("positivi.txt");
    ofstream out2("negativi.txt");
    int n;
    while(in>>n){
        if (n<0)
            out2<<n <<" ";
        if (n>0)
            out<<n <<" ";
    }
    return 0;
}
