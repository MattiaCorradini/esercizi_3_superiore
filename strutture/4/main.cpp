#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("input.txt");
    string riga;
    int contatore=0;
    while (getline(in, riga)){
        contatore+=riga.size();
    }
    cout << "il file contiene " <<contatore <<" caratteri" <<endl;
    return 0;
}
