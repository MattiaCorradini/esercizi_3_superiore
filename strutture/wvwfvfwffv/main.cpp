#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("file.txt");
    ofstream out ("copia_file.txt");
    string riga;
    while (getline(in, riga)){
        for (int i = 0; i < riga.size(); ++i) {
            char c=riga.at(i);
            out<<c;
        }
        out<<endl;
    }
    return 0;
}
