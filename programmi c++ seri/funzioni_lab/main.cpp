#include <iostream>
using namespace std;
int tempo(int h, int m, int s){
    return s+m*60+h*60*60;
}
int main(){
    int h1,h2,m1,m2,s1,s2;
    cout<<"inserisci il primo intervallo di tempo ";
    cout<<" espresso in ore, minuti e secondi ";
    cin>>h1;
    cin>>m1;
    cin>>s1;

    cout<<"inserisci il secondo intervallo di tempo ";
    cout<<" espresso in ore, minuti e secondi ";
    cin>>h2;
    cin>>m2;
    cin>>s2;

    int intervallo1=tempo(h1,m1,s1);
    int intervallo2=tempo(h2,m2,s2);

    if(intervallo1>intervallo2)
    {
        cout<<"il primo intervallo e' maggiore del secondo";
    }
    else
    {
         if(intervallo1<intervallo2)
        {
            cout<<"il primo intervallo e' minore del secondo";
        }
        else
        {
            cout<<"gli intervalli sono uguali";
        }
    }

    return 0;
}
