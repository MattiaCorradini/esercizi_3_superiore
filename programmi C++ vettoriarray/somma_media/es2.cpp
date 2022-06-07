#include <iostream>
using namespace std;
int main() {
    const int MAX=7;
    int zeri=0;
    int n[MAX];
    for (int i = 0; i < MAX; ++i) {
        cin>>n[i];
    }
    for (int i = 0; i < MAX; ++i) {
        if (n[i]==0)
            zeri++;
    }
    cout <<"sono stati inseriti " <<zeri <<" zeri";
    return 0;
}
