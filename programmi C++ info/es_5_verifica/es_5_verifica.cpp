#include <iostream>
using namespace std;
int main(){
    int alunni;
    float media=0, voto;
    cout<<"inserisci il  numero degli alunni: " << endl;
    cin >>alunni ;
    for(int i=0 ; i<alunni ; i++){
        for(int j=0 ; j<5 ; j++){

            cout<<"inserisci i voti dell alunno" << endl;
            cin>> voto;
            media = media + voto ;
        }
        media = media/5 ;
        cout <<"la media dello alunno è: " <<media <<endl;
        media=0;
    }
    return 0;
}