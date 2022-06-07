#include <iostream>
using namespace std;
int main() {
    int i;
    float f;
    cin>>f;
    cin>>i;
    if (f+i>100){
        cout <<f+i <<endl <<f*i;
    }
    else if (f+i<=100 && f*i>100){
        cout <<f*i;
    }
    else
        cout <<"NIENTE";
    return 0;
}
