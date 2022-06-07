#include <iostream>
using namespace std;

bool caratteri(string stringa){
    for (int i = 0; i < stringa.size(); ++i) {
        if (stringa.at(i)!='a' || stringa.at(i)!='b' || stringa.at(i)!='c' || stringa.at(i)!='d' || stringa.at(i)!='e' || stringa.at(i)!='f'
        || stringa.at(i)!='1' || stringa.at(i)!='2' || stringa.at(i)!='3' || stringa.at(i)!='4' || stringa.at(i)!='5'
        || stringa.at(i)!='6' || stringa.at(i)!='7' || stringa.at(i)!='8' || stringa.at(i)!='9' || stringa.at(i)!='0')
            return false;
    }
    return true;
}

bool mac_addres(string stringa){
    if (stringa.size()!=12)
        return false;
    for (int i = 0; i < stringa.size(); ++i) {
        if (!caratteri(stringa))
            return false;
    }
    return true;
}

int main() {
    string mac;
    cin>>mac;
    if (mac_addres(mac))
        cout<<"e' un mac addres." <<endl;
    else
        cout<<"non e' un mac addres" <<endl;
    return 0;
}
