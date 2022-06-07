#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in1("file1.txt");
    ifstream in2("file2.txt");
    ofstream out("file3.txt");
    string riga1, riga2;
    while (getline(in1, riga1)){
        for (int i = 0; i < riga1.size(); ++i) {
            char c=riga1.at(i);
            out<<c;
        }
    }
    out<<endl <<"                  +                  " <<endl;
    while (getline(in2, riga2)){
        for (int i = 0; i < riga2.size(); ++i) {
            char c=riga2.at(i);
            out<<c;
        }
    }
    return 0;
}
