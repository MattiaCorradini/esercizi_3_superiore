#include <iostream>
using namespace std;

const int DIM=100;

int maggiore(int matrice[][DIM], int rig, int col, int &r, int &c){
    int maggiore=matrice[0][0];
    r = 0;
    c = 0;
    for (int i = 0; i < rig; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrice[i][j] > maggiore){
                maggiore = matrice[i][j];
                r = i;
                c= j;
            }
        }
    }
    return maggiore;
}

int minore(int matrice[][DIM], int N, int M, int &r, int &c){
    int minore = matrice[0][0];
    r=0;
    c=0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrice[i][j] < minore){
                minore=matrice[i][j];
                r=i;
                c=j;
            }
        }
    }
    return minore;
}

int area(int matrice[][DIM], int N, int M, int riga_magg, int colonna_magg, int riga_min, int colonna_min){
    int somma_area = 0;
    if (riga_min < riga_magg){
        int temp = riga_magg;
        riga_magg = riga_min;
        riga_min = temp;
    }
    if (colonna_min < colonna_magg){
        int temp = colonna_magg;
        colonna_magg = colonna_min;
        colonna_min = temp;
    }
    for (int i = riga_magg; i <= riga_min; ++i) {
        for (int j = colonna_magg; j <= colonna_min; ++j) {
            somma_area += matrice[i][j];
        }
    }
    return somma_area;
}

int main() {
    int matrice[DIM][DIM];
    int N, M, S, riga, colonna;
    int riga_magg, colonna_magg, riga_min, colonna_min;
    cin >> N >> M >> S;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrice[i][j];
        }
    }
    if (S == 1){
        cout <<maggiore(matrice, N, M, riga, colonna) << " " << riga << " " << colonna;
    }
    else if (S == 2){
        cout <<minore(matrice, N, M, riga, colonna) << " " << riga << " " << colonna;
    }
    else if (S == 3){
        maggiore(matrice, N, M, riga_magg, colonna_magg);
        minore(matrice, N, M, riga_min, colonna_min);
        cout <<area(matrice, N, M, riga_magg, colonna_magg, riga_min, colonna_min);
    }
    return 0;
}