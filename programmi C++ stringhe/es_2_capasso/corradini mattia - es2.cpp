#include <iostream>
using namespace std;

string criptazione(string s, string chiave){
    string criptata;
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i)!=' '){
            int c=tolower(s.at(i))-'a';
            char t=chiave.at(c);
            criptata+=t;
        }
        else
            criptata+=' ';
    }
    return criptata;
}

int main() {
    string chiave;
    getline(cin, chiave);
    while (chiave.size()<26){
        cin>>chiave;
        cout<<"la chiave deve contenere 26 caratteri."<<endl;
    }
    string frase;
    getline(cin, frase);
    cout<<criptazione(frase, chiave);
    return 0;
}
