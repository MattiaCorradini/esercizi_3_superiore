#include <iostream>
using namespace std;

const int MATERIE=5;

struct Materia{
    string nome;
    float voto;
};

struct Studente{
    string nome, cognome;
    char classe;
    string id;
    Materia materie[MATERIE];
};

struct istituto{
    Studente studenti[100];
    int n_studenti;
};

void menu(){
    cout <<"selezionare un numero in base alla scelta che si vuole fare: " <<endl;
    cout <<"1) carica i dati di uno studente (nome, cognome, classe e ID);" <<endl;
    cout <<"2) carica le valutazioni finali di uno studente dato uno specifico ID;" <<endl;
    cout <<"3) visualizza gli studenti che hanno preso un voto compreso tra 6 e 8, visualizzando anche il nome," <<endl
         <<"   il cognome, la classe, il voto e la materia in cui e' stato preso il voto, data una specifica materia;" <<endl;
    cout <<"4) visualizza il voto piu' alto ottenuto e in quale materia e' stato ottenuto, dato uno specifico ID;" <<endl;
    cout <<"5) visualizza lo studente che ha preso il voto piu' in alto in assoluto, visualizzando materia e voto;" <<endl;
    cout <<"6) visualizza lo studente che ha preso il voto piu' in basso in assoluto, visualizzando materia e voto;" <<endl;
    cout <<"7) visualizza gli studenti bocciati (2 o piu' voti inferiori a 6), specificando il nome, cognome e la classe;" <<endl;
    cout <<"8) visualizza, tra gli studenti delle classi 3, l'alunno che ha la media voti piu' alta, stampando a quanto ammonta;" <<endl;
    cout <<"9) visualizza tutti i dati degli studenti, dato uno specifico ID;" <<endl;
    cout <<"10) esce dal programma." <<endl;
}

bool id_valido (string id, const istituto &s){
    for (int i = 0; i < s.n_studenti; i++) {
        if (s.studenti[i].id == id)
            return true;
    }
    return false;
}

void scelta_1 (istituto &s){
    cout << "inserire ID dello studente: " << endl;
    cin >> s.studenti[s.n_studenti].id;
    while (id_valido(s.studenti[s.n_studenti].id, s)){
        cout << "ID appartenente ad un altro alunno" << endl;
        cout << "inserire ID dello studente: " << endl;
        cin >> s.studenti[s.n_studenti].id;
    }
    cout << "inserire il nome dello studente: " << endl;
    cin >> s.studenti[s.n_studenti].nome;
    cout << "inserire il cognome dello studente: " << endl;
    cin >> s.studenti[s.n_studenti].cognome;
    cout << "inserire la classe dello studente: " << endl;
    cin >> s.studenti[s.n_studenti].classe;
    s.studenti[s.n_studenti].materie[0].nome = "italiano";
    s.studenti[s.n_studenti].materie[0].voto = 11;
    s.studenti[s.n_studenti].materie[1].nome = "matematica";
    s.studenti[s.n_studenti].materie[1].voto = 11;
    s.studenti[s.n_studenti].materie[2].nome = "inglese";
    s.studenti[s.n_studenti].materie[2].voto = 11;
    s.studenti[s.n_studenti].materie[3].nome = "scienze";
    s.studenti[s.n_studenti].materie[3].voto = 11;
    s.studenti[s.n_studenti].materie[4].nome = "disegno";
    s.studenti[s.n_studenti].materie[4].voto = 11;
    s.n_studenti++;
}

int controllo_id (const istituto &s, string id){
    for (int i = 0; i < s.n_studenti; i++) {
        if (s.studenti[i].id == id)
            return i;
    }
    return -1;
}

float media (const Studente &s){
    float media = 0;
    for (int i = 0; i < MATERIE; i++) {
        media += s.materie[i].voto;
    }
    return media/MATERIE;
}

void scelta_2 (istituto &s){
    cout << "inserire ID da cercare: " << endl;
    string id;
    cin >> id;
    while (!id_valido(id, s)) {
        cout << "spiacente, non ho trovato lo studente, riprova." << endl;
        cout << "inserire ID da cercare: " << endl;
        cin >> id;
    }
    int indice_studente = controllo_id(s, id);
    cout << "inserire i voti: " << endl;
    for (int i = 0; i < MATERIE; i++) {
        cout << s.studenti[indice_studente].materie[i].nome << ": " << endl;
        cin >> s.studenti[indice_studente].materie[i].voto;
    }
}

void scelta_3 (const istituto &s){
    cout << "inserire il nome della materia: " << endl;
    string nome_materia;
    cin >> nome_materia;
    for (int i = 0; i < s.n_studenti; i++) {
        for (int j = 0; j < MATERIE; j++) {
            if (s.studenti[i].materie[j].nome==nome_materia && s.studenti[i].materie[j].voto>=6 && s.studenti[i].materie[j].voto<=8){
                cout << "nome: " << s.studenti[i].nome << endl;
                cout << "cognome: " << s.studenti[i].cognome << endl;
                cout << "classe: " << s.studenti[i].classe << endl;
                cout << "voto: " << s.studenti[i].materie[j].voto << endl << endl;
            }
        }
    }
}

void scelta_4 (const istituto &s){
    cout << "inserire ID da cercare: " << endl;
    string id;
    cin >> id;
    while (!id_valido(id, s)) {
        cout << "spiacente, non ho trovato lo studente, riprova." << endl;
        cout << "inserire ID da cercare: " << endl;
        cin >> id;
    }
    int indice_studente = controllo_id(s, id);
    int max = 0;
    for (int i = 1; i < MATERIE; i++) {
        if (s.studenti[indice_studente].materie[i].voto > s.studenti[indice_studente].materie[max].voto)
            max = i;
    }
    cout << "materia: " << s.studenti[indice_studente].materie[max].nome << endl;
    cout << "voto: " << s.studenti[indice_studente].materie[max].voto << endl;
}

void scelta_5 (const istituto &s){
    int indice_studente = 0, indice_materia = 0;
    for (int i = 0; i < s.n_studenti; i++) {
        for (int j = 0; j < MATERIE; j++) {
            if (s.studenti[i].materie[j].voto > s.studenti[indice_studente].materie[indice_materia].voto){
                indice_studente = i;
                indice_materia = j;
            }
        }
    }
    cout << "nome: " << s.studenti[indice_studente].nome << endl;
    cout << "cognome: " << s.studenti[indice_studente].cognome << endl;
    cout << "classe: " << s.studenti[indice_studente].classe << endl;
    cout << "materia: " << s.studenti[indice_studente].materie[indice_materia].nome << endl;
    cout << "voto: " << s.studenti[indice_studente].materie[indice_materia].voto << endl;
}

void scelta_6(const istituto &s) {
    int indice_studente = 0;
    int indice_materia = 0;
    for (int i = 0; i < s.n_studenti; i++) {
        for (int j = 0; j < MATERIE; j++) {
            if (s.studenti[i].materie[j].voto < s.studenti[indice_studente].materie[indice_materia].voto){
                indice_studente = i;
                indice_materia = j;
            }
        }
    }
    cout << "nome: " << s.studenti[indice_studente].nome << endl;
    cout << "cognome: " << s.studenti[indice_studente].cognome << endl;
    cout << "classe: " << s.studenti[indice_studente].classe << endl;
    cout << "materia: " << s.studenti[indice_studente].materie[indice_materia].nome << endl;
    cout << "voto: " << s.studenti[indice_studente].materie[indice_materia].voto << endl;
}

void scelta_7 (const istituto &s){
    for (int i = 0; i < s.n_studenti; i++) {
        bool insufficiente=false;
        for (int j = 0; j < MATERIE; j++) {
            if (s.studenti[i].materie[j].voto<6) {
                if (insufficiente) {
                    cout << "nome: " << s.studenti[i].nome << endl;
                    cout << "cognome: " << s.studenti[i].cognome << endl;
                    cout << "classe: " << s.studenti[i].classe << endl << endl;
                    break;
                }
                insufficiente=true;
            }
        }
    }
}

void scelta_8(const istituto &s) {
    int indice_studente = 0;
    for (int i = 1; i < s.n_studenti; i++) {
        if (s.studenti[i].classe != '3')
            continue;
        if (media(s.studenti[i]) > media(s.studenti[indice_studente]))
            indice_studente=i;
    }
    cout << "nome: " << s.studenti[indice_studente].nome << endl;
    cout << "cognome: " << s.studenti[indice_studente].cognome << endl;
    cout << "classe: " << s.studenti[indice_studente].classe << endl;
    cout << "media: " << media(s.studenti[indice_studente]) << endl;
}

void scelta_9 (const istituto &s){
    cout << "inserire ID da cercare: " << endl;
    string id;
    cin >> id;
    while (!id_valido(id, s)) {
        cout << "spiacente, non ho trovato lo studente, riprova." << endl;
        cout << "inserire ID da cercare: " << endl;
        cin >> id;
    }
    int indice_studente = controllo_id(s, id);
    cout << "nome studente: " << s.studenti[indice_studente].nome << endl;
    cout << "cognome studente: " << s.studenti[indice_studente].cognome << endl;
    cout << "classe studente: " << s.studenti[indice_studente].classe << endl;
    for (int i = 0; i < MATERIE; i++) {
        cout << s.studenti[indice_studente].materie[i].nome << ": " << s.studenti[indice_studente].materie[i].voto << endl;
    }
    cout << "media: " << media(s.studenti[indice_studente]) << endl;
}

int main() {
    istituto scuola;
    scuola.n_studenti=0;
    int scelta;
    menu();
    cin>>scelta;
    while(scelta!=10){
        if (scelta==1){
            scelta_1(scuola);
        }
        if (scelta==2){
            scelta_2(scuola);
        }
        if (scelta==3){
            scelta_3(scuola);
        }
        if (scelta==4){
            scelta_4(scuola);
        }
        if (scelta==5){
            scelta_5(scuola);
        }
        if (scelta==6){
            scelta_6(scuola);
        }
        if (scelta==7){
            scelta_7(scuola);
        }
        if (scelta==8){
            scelta_8(scuola);
        }
        if (scelta==9){
            scelta_9(scuola);
        }
        menu();
        cin>>scelta;
    }
    return 0;
}