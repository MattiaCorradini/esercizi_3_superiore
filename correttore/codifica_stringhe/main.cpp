#include <iostream>
using namespace std;

void criptata(string s){
    for (int i = 0; i < s.size(); ++i) {
        char c=s.at(i);
        if (c>='a' && c<'z'){
            c+=1;
        }
        if (c==' ')
            c=' ';
        if (c=='z')
            c='a';
        cout<<c;
    }
}

int main() {
    string s;
    getline(cin, s);
    criptata(s);
    return 0;
}