#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("Testo.txt");
    ofstream out("Maiuscolo.txt");
    string parola;
    while (in >> parola){
        for (int i = 0; i < parola.size(); i++){
            out << toupper(parola.at(i));
        }
        out << endl;
    }
    return 0;
}
