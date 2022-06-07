#include <iostream>
using namespace std;

int confronta_coppie (int num_1,  int num_2, int num_3){
    int coppie=0;
    cin >>num_1, num_2, num_3;
    if (num_2==num_1){
        coppie++;
        return num_2;
    }
    else if (num_1==num_3){
        coppie++;
        return num_1;
    }
    else if (num_3==num_2){
        coppie ++;
        return num_3;
    }
    else{
        return -1;
    }
}

int main() {

    return 0;
}
