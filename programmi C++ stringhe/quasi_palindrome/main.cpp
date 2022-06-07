#include <iostream>
using namespace std;

void scambia(char &a, char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
}

bool palindroma(string stringa, char &a, char &b){
    for (int i = 0; i < stringa.size()/2; ++i) {
        if (stringa.at(i)!=stringa.at(stringa.size()-i-1)){
            a=stringa.at(i);
            b=stringa.at(stringa.size()-i-1);
            return false;
        }
        scambia(a, b);
    }
    return true;
}

bool quasi_palindroma(string stringa, char &a, char &b){
    int cont=0;
    while(cont<stringa.size()/2){
        for (int i = 0; i < stringa.size()/2; ++i) {
            if (stringa.at(i)!=stringa.at(stringa.size()-i-1)){
                a=stringa.at(i);
                b=stringa.at(stringa.size()-i-1);
                scambia(a, b);
            }
        }
        return false;
    }
    return true;
}

int main() {
    char a, b;
    string parola;
    cin>>parola;
    if (palindroma(parola, a, b))
        cout<<"la parola e' palindroma.";
    if (quasi_palindroma(parola, a, b))
        cout<<" e' pero' quasi palindroma." <<endl;
    if (!palindroma(parola, a, b))
        cout<<"la parola non e' palindroma.";
    if (!quasi_palindroma(parola, a, b))
        cout<<" non e' neanche quasi palindroma." <<endl;
    return 0;
}
