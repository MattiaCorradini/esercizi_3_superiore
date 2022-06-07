#include <iostream>
using namespace std;

int converti_orario_minuti(int ore, int minuti){
    //lo stesso di fare:
    //int totale=ore*60+minuti;
    //return totale;
    return ore*60+minuti;
}

int main() {
    int ore_inizio=18, minuti_inizio=59, ora_sveglia=19, minuti_sveglia=01;//in realtà vanno fatti inserire dall'utente
    int minuti_totale_attuale;
    int minuti_totale_sveglia;
    int minuti_passati;
    minuti_totale_attuale= converti_orario_minuti(ore_inizio, minuti_inizio);
    minuti_totale_sveglia= converti_orario_minuti(ore_inizio, minuti_sveglia);
    if (minuti_totale_attuale<minuti_totale_sveglia)
        minuti_passati=minuti_sveglia-minuti_totale_attuale;
    else
        minuti_passati=minuti_totale_sveglia+24*60-minuti_totale_sveglia;
    cout <<"ore: " <<minuti_passati/60 <<" minuti: " <<minuti_passati%60 <<endl;
    return 0;
}
