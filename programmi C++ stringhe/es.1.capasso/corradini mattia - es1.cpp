#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    while(s1.size()<7 || s2.size()<7){
        cout<<"le parole devono avere 7 o piu' caratteri!"<<endl;
        cin>>s1;
        cin>>s2;
    }
    s1.replace(2, 3, "***");
    s2.replace(2, 3, "***");
    string s1finale;
    string s2finale;
    s1finale+=s1.at(s1.size()-2);
    s1finale+=s1.at(s1.size()-1);
    s2finale+=s2.at(s1.size()-1);
    s2finale+=s2.at(s1.size());
    s1.replace(s1.size()-2, 2, s2finale);
    s2.replace(s2.size()-2, 2, s1finale);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
