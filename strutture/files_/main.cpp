#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("dpc-covid19-ita-andamento-nazionale.csv");
    if (!in){
        cout<<"apertura fallita" <<endl;
        return 1;
    }
    string riga;
    int num_riga=1;
    getline(in,riga);
    while (getline(in,riga)){
        string data;
        int pos=riga.find(',');
        data=riga.substr(0, pos);
        cout<<"data: " <<data <<" ";
        riga.erase(0,pos+1);
        pos=riga.find(',');
        riga.erase(0,pos+1);
        string ricoverati_stringa;
        pos=riga.find(',');
        ricoverati_stringa=riga.substr(0, pos);
        cout<<"ricoverati: " <<ricoverati_stringa <<" ";
        riga.erase(0,pos+1);
        pos=riga.find(',');
        riga.erase(0,pos+1);
        string intensiva;
        pos=riga.find(',');
        intensiva=riga.substr(0, pos);
        cout<<"intensiva: " <<intensiva <<endl;
        num_riga++;
    }
    in.close();
    return 0;
}
