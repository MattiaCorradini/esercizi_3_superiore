/*
#include <iostream>
using namespace std;
int main(){
    int n,m;
    do{
        cout <<"inserire gli estremi della sequenza" <<endl;
        cin >>m;
        cin >>n;
    } while (m>n);
    for (int i = 0; i < n-m; ++i) {
        if(m%2==0) {
            cout << m << endl;
        }
            m++;
            n++;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"inserire il numero finale dela sequenza" <<endl;
    cin >>n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 != 0) {
            cout <<i*i <<endl;
        }
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    int N,A,somma=0,i=0;
    cin >> N;
    cin >> A;
    while(i<N)
    {
        if(A%2==0)
        {
            i++;
            somma+=A;
        }
        A++;
    }
    float media;
    media=somma/N;
    cout << media;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
    int voto;
    int prec, succ;
    int media;
    cout <<"inserisci i tre voti: " <<endl;
    for (int i = 0; i < 3; ++i) {
        cin >>voto;
        voto=prec;
        prec=succ;
    }
    media= (voto+prec+succ)/3;
    cout <<media <<endl;
    return 0;
}
