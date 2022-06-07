#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("input.txt");
    ofstream out("multipli_5.txt");
    int n;
    while(in>>n){
        if (n==0)
            break;
        else if (n%5==0)
            out<<n <<" ";
    }
    return 0;
}
