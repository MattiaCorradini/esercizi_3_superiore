#include <iostream>
using namespace std;

const int N=6;

bool simmetrie(){
    int numeri[N][N]={1, 0, 0, 0, 0, 0,
                      0, 1, 0, 0, 0, 0,
                      0, 0, 1, 0, 0, 0,
                      0, 0, 0, 1, 0, 0,
                      0, 0, 0, 0, 1, 0,
                      0, 0, 0, 0, 0, 1};
    bool flag=true;
    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <N ; ++j) {
            if(i!=j)
                if(numeri[i][j]!=numeri[N-i-1][N-j-1]){
                    flag=false;
                }
        }
    }
    if(flag)
        return "simmetrica";
    else
        return "non simmetrica";
}

int main() {

    return 0;
}