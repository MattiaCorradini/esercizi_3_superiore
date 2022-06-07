#include <iostream>
using namespace std;
int main() {
    int n_1, n_2, n_3, n_4;
    cin >>n_1 >>n_2 >>n_3 >>n_4;
    if (n_1>n_2 && n_1>n_3 && n_1>n_4)
        cout <<n_1 <<" e' il numero maggiore tra quelli inseriti";
    else if (n_2>n_1 && n_2>n_3 && n_2>n_4)
        cout <<n_2 <<" e' il numero maggiore tra quelli inseriti";
    else if (n_3>n_1 && n_3>n_2 && n_3>n_4)
        cout <<n_3 <<" e' il numero maggiore tra quelli inseriti";
    else if (n_4>n_1 && n_4>n_2 && n_4>n_3)
        cout <<n_4 <<" e' il numero maggiore tra quelli inseriti";
    return 0;
}
