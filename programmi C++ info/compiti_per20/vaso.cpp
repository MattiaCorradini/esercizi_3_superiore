#include <iostream>
using namespace std;
int main() {
    int n, spazi;
    cin >> n;
    spazi = n;
    for (int i = 0; i < spazi; ++i) {
        cout << " ";
    }
    for (int i = 0; i < n; ++i) {
        cout << "_";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        spazi--;
        for (int j = 0; j < spazi; ++j) {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < 2 * i + n; ++j) {
            cout << " ";
        }
        cout << "\\" << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << "|";
        for (int j = 0; j < 2 * (n - 1) + n; ++j) {
            cout << " ";
        }
        cout << "|" << endl;
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < spazi; ++j) {
            cout << " ";
        }
        cout << "\\";
        if (i == 0){
            for (int j = 0; j < n; ++j) {
                cout << "_";
            }
        }
        else{
            for (int j = 0; j < 2 * i + n; ++j) {
                cout << " ";
            }
        }
        cout << "/" << endl;
        spazi++;
    }
    return 0;
}
