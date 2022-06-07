#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    const int MAX = 5;
    int matrice[MAX][MAX];
    int maggiori[MAX];
    int maggiore;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            matrice[i][j] = (rand() % 100) + 1;
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < MAX; ++i) {
        maggiore = matrice[i][0];
        for (int j = 0; j < MAX; ++j) {
            if (matrice[i][j] > maggiore){
                maggiore = matrice[i][j];
            }
        }
        maggiori[i] = maggiore;
    }
    cout << endl;
    for (int i = 0; i < MAX; ++i) {
        cout << maggiori[i] << " ";
    }
    return 0;
}
