#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float n=0, media=0, numeri=0;
    cin >>n;
    while(n!=-1){
        media+=n;
        numeri++;
        cin >>n;
    }
    cout <<fixed <<setprecision(2) <<media/numeri;
    return 0;
}
