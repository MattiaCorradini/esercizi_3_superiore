#include <iostream>
using namespace std;
int main() {
    string bl = "forse no";
    string bl1 = "forse forse";
    string bl2 = "forse boh";
    string bl3 = "forse non vengo";
    string risposta;
    getline(cin, risposta);
    if (risposta == bl || risposta == bl1 || risposta == bl2 || risposta == bl3)
        cout << "risposta sbagliata scema di merda" <<endl;
    return 0;
}
