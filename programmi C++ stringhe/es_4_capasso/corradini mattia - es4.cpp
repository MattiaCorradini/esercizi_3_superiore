#include <iostream>
using namespace std;

int main() {
    string parole [10000];
    string inserire;
    int i=0;
    int quattro=0;
    while (inserire.size()!=3){
        cin>>parole[i];
        inserire=parole[i];
        if (parole[i].size()==4)
            quattro++;
        i++;
    }
    string temp=parole[0];
    parole[0]=parole[i-1];
    parole[i-1]=temp;
    for (int j = 0; j < i; ++j) {
        cout << parole [j] << endl;
    }
    cout<<endl<<"le parole che contengono 4 lettere sono: "<<quattro<< endl;
    cout<<endl<<"le parole che contengono la lettera x sono: ";
    for (int j = 0; j < i; ++j) {
        if (parole[j].find('x', 0)!=-1)
            cout<<parole[j] <<" ";
    }
    cout<<endl;
    return 0;
}
