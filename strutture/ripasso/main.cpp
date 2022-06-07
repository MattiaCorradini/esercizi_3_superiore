#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in ("input.txt"), in2 ("input2.txt");
    //controlla eventuali problemi nella lettura
    if(!in || !in2){
        cout<<"problemi con l'apertura del file" <<endl;
        return 1;
    }
    float n, n2, media=0;
    int conta=0;
    string riga;
    while (getline(in, riga)){ //la getline legge tutto come caratteri e non come interi
        float temp= stof(riga);
        media+=temp;
        conta ++;
    }
    while (in2>>n){
        media+=n;
        conta++;
    }
    // stampa a video -> cout <<media/conta <<endl;
    ofstream out ("media.txt");
    if (!out){
        cout<<"non posso scrivere il risultato" <<endl;
        return 1;
    }
    out<<"il file contiene " <<conta <<" valori" <<endl;
    out <<media/conta <<endl;
    in.close();
    in2.close();
    out.close();
    return 0;
}
