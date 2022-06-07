#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    const int MAX = 1000;
    int n, m=0, x, y;
    float pi, distanza;
    cin>>n;
    for (int i=0; i<n; i++){
        x = rand() % (MAX + 1);
        y = rand() % (MAX + 1);
        distanza = (x*x) + (y*y);
        if (distanza <= MAX * MAX) m++;
    }
    pi = float(m) / n;
    cout << pi * 4;
    return 0;
}
