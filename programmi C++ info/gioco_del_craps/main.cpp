#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int lancio;
    lancio = (rand()%6+1) + (rand()%6+1);
    cout <<"il primo lancio ha prodotto il numero: " <<lancio <<endl;
    if (lancio==7 || lancio==11)
    {
        cout <<"hai vinto" <<endl;
    }
    else if (lancio <=3 || lancio==12)
    {
        cout <<"hai perso" <<endl;
    }
    else
    {
        int target=lancio;
        lancio = (rand()%6+1) + (rand()%6+1);
        cout <<"il lancio ha prodotto il numero: " <<lancio <<endl;
        while (lancio!=target && lancio!=7) {
            lancio = (rand()%6+1) + (rand()%6+1);
            cout << "il lancio ha prodotto il numero: " << lancio << endl;

        }

        if (lancio==target)
            cout <<"hai vinto" <<endl;
        else
            cout<<"hai perso" <<endl;

    }
    return 0;
}