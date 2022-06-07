#include <iostream>
using namespace std;
int main() {
    int giorni;
    cin >>giorni;
    switch (giorni)
    {
        case 1:
            cout <<"gennaio, 31 giorni";
            break;
        case 2:
            cout <<"febbraio, 28 giorni";
            break;
        case 3:
            cout <<"marzo, 31 giorni";
        case 4:
            cout <<"aprile, 30 giorni";
            break;
        case 5:
            cout <<"maggio, 31 giorni";
        case 6:
            cout <<"giugno, 30 giorni";
        case 7:
            cout <<"luglio, 31 giorni";
            break;
        case 8:
            cout <<"agosto, 31 giorni";
            break;
        case 9:
            cout <<"settembre, 30 giorni";
            break;
        case 10:
            cout <<"ottobre, 31 giorni";
            break;
        case 11:
            cout <<"novembre, 30 giorni";
            break;
        case 12:
            cout <<"dicembre, 31 giorni";
            break;
    }
    return 0;
}
