#include <iostream>
using namespace std;

void caratteri_ripetuti(string parola){
    while (!parola.empty()) {
        int n_caratteri=1;
        string temp;
        char esame=parola.at(0);
        for (int j = 1; j < parola.size(); ++j) {
            if (parola.at(j) == esame)
                n_caratteri++;
            else
                temp += parola.at(j);
        }
        if (n_caratteri>1)
            cout<<"carattere ripetuto: "<<esame <<", ed e' stato ripetuto "<<n_caratteri <<" volte" <<endl;
        parola=temp;
    }
}

int main() {
    string parola;
    cin>>parola;
    caratteri_ripetuti(parola);
    return 0;
}
