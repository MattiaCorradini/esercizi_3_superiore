#include <iostream>
using namespace std;
int main() {
    const int MAX = 5;
    int n, numero_n = 0;
    int matrice[MAX][MAX];
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            matrice[i][j] = rand() % 10;
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    cout << "numero da cercare: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (matrice[i][j] == n){
                numero_n ++;
            }
        }
    }
    cout << numero_n;
    return 0;
}
