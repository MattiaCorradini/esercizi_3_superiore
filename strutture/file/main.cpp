#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    if (!in){
        cout<<"errore nell'apretura del file.";
        return 1;
    }
    int n;
    in>>n;
    return 0;
}
