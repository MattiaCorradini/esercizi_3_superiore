#include <iostream>
using namespace std;
int contatore (int N, bool gioco[][20], int j, int k){
    int vivi=0;
    for (int f = j-1; f <= j+1 ; ++f) {
        for (int t =k-1 ; t <=k+1 ; ++t) {
                if (gioco[f][t])
                    vivi++;


        }
    }
if(gioco[j][k]){
    vivi--;
}
    return vivi;
}
int main() {

    const int N=20;
    bool gioco[N][N]  ;
    bool copia[N][N];
    int numeri;
    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <N ; ++j) {
            if(i==0 || j==0 || j==N-1 || i==N-1)
                gioco[i][j]=false;

            else if (rand()%2==0){
                gioco[i][j]=false;
            }
            else
                gioco[i][j]=true;


            copia[i][j]=gioco[i][j];
        }
    }




cout<<"SITUAZIONE INIZIALE"<<endl;
    for (int j = 0; j <N ; ++j) {
        for (int k = 0; k <N ; ++k) {
            cout<<gioco[j][k]<<"  ";
        }
        cout<<endl;
    }
cout<<endl;

    for (int i = 1; i <=2 ; ++i) {
        for (int j = 1; j <N-1 ; ++j) {
            for (int k = 1; k <N-1 ; ++k) {
                numeri= contatore(N,gioco,j,k);
                if(!gioco[j][k]){

                    if(numeri==3)
                        copia[j][k]=true;
                }
                else if(gioco[j][k]){
                    if(numeri>3 || numeri<2)
                    copia[j][k]=false;
                    else
                    copia[j][k]=true;
                }
            }
        }
         for (int j = 0; j <N ; ++j) {
            for (int k = 0; k <N ; ++k) {
             gioco[j][k]=copia[j][k];
            }
        }
        cout<<i<<" ' simulazione\n"<<endl;

        for (int j = 0; j <N ; ++j) {
            for (int k = 0; k <N ; ++k) {
                cout<<gioco[j][k]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}