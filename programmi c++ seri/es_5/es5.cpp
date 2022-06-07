#include <iostream>
using namespace std;

bool vocale(char lettera){
    if (lettera=='a'||lettera=='e'||lettera=='i'||lettera=='o'||lettera=='u')
        return true;
    else
        return false;
}

int main() {
    char lettera;
    cin>>lettera;
    if(vocale(lettera))
        cout <<"vocale";
    else
        cout <<"consonante";
    return 0;
}
