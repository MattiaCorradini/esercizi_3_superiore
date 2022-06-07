#include <iostream>
using namespace std;

const int n=3;

int magg(int m[][n], int &x, int &y, int &num) {
    int maggiore = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (m[i][j] > maggiore) {
                maggiore = m[i][j];
                x = i;
                y = j;
            }
        }
    }
}

int main() {
    int x, y, num;
    int matrice [n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrice[j][n];
        }
    }
    cout<<magg(matrice, x, y, num);
    return 0;
}
