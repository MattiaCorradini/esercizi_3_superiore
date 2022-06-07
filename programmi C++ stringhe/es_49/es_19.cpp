#include <iostream>
using namespace std;

bool palindroma(string stringa){
    for (int i = 0; i < stringa.size()/2; ++i) {
        if (stringa.at(i)!=stringa.at(stringa.size()-i-1))
            return true;
    }
    return false;
}

int main() {
    string parola;
    cin>>parola;
    if (!palindroma(parola))
        cout<<"la stringa e' palindroma." <<endl;
    else
        cout<<"la stringa non e' palindroma." <<endl;
    return 0;
}
