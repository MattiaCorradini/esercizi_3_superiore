#include <iostream>
using namespace std;
int main() {
    int N, M, S, K;
    cin>>N >>M;
    S=N+M;
    cout <<S <<" ";
    if(S%2==0){
        K=N*M;
        cout<<K;
    }
    else if(S%2!=0){
        K=N-M;
        cout<<K <<endl;
    }
    return 0;
}