#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("input,txt");
    ofstream out("multipli5.txt");
    int n;
    while(in >> n){
        if (n%5==0)
            out<<n <<" - ";
    }
    return 0;
}