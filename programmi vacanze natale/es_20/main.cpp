#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >>a >>b >>c;
    int x=(b*c)/a;
    cout <<x <<endl;
    if (x>100)
        cout <<"x e' maggiore di 100";
    else if (x<100)
        cout <<"x e' minore di 100";
    else
        cout <<"x e' uguale a 100";
    return 0;
}
