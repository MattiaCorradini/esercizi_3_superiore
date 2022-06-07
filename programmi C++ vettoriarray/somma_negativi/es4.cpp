#include <iostream>
using namespace std;
int main() {
    const int MAX=8;
    int negativi=0;
    int v[MAX];
    for (int i = 0; i < MAX; ++i) {
        cin >>v[i];
    }
    for (int i = 0; i < MAX; ++i) {
        if (v[i]<0)
            negativi++;
    }
    cout <<"sono stati inseriti " <<negativi <<" numeri negativi";
    return 0;
}
