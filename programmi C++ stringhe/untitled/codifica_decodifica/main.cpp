#include <iostream>
#include <fstream>

using namespace std;

int leggi_stringhe(const string& nomefile, string s[])
{
    ifstream in(nomefile);
    if (in.fail())
        return -1;
    int contatore = 0;
    string temp;
    while(getline(in, temp)){
        s[contatore] = temp;
        contatore++;
    }
    return contatore;
}

int scrivi_stringhe(const string& nomefile, string s[], int n)
{
    ofstream in(nomefile);
    if (in.fail())
        return -1;
    int contatore = 0;
    string temp;
    for (int i = 0; i < n; ++i) {
        in << s[i] << endl;
    }
    return 1 ;
}

string codifica_uno(string chiaro)
{
    string codificata;
    for (int i = 0; i < chiaro.size(); ++i) {
        char c = chiaro.at(i);
        if (c == 'z')
            codificata += 'a';
        else if (c == 'Z')
            codificata += 'A';
        //Se è una lettera minuscola o maiuscola
        else if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z'))
            codificata += (c + 1);
        else
            codificata += c;
    }
    return codificata;
}

string codifica_cesare(string chiaro, int n)
{
    string codificata;
    for (int i = 0; i < chiaro.size(); ++i) {
        char c = chiaro.at(i);
        if ((c >= 'a' && c <= 'z') )
            codificata += (((c + n) - 'a') % 26) + 'a';
        else if(c >= 'A' && c <= 'Z')
            codificata += (((c + n) - 'A') % 26) + 'A';
        else
            codificata += c;
    }
    return codificata;
}

string codifica_sostituzione(string chiaro, string chiave)
{
    string codificata;
    string chiaveMaiuscola;
    for (int i = 0; i < chiave.size(); ++i) {
        chiaveMaiuscola += toupper(chiave.at(i));
    }
    for (int i = 0; i < chiaro.size(); ++i) {
        char c = chiaro.at(i);
        if ((c >= 'a' && c <= 'z') )
            codificata += chiave.at(chiaro.at(i) - 'a');
        else if(c >= 'A' && c <= 'Z')
            codificata += chiaveMaiuscola.at(chiaro.at(i) - 'A');
        else
            codificata += c;
    }
    return codificata;
}

int main() {
    const int N_STRINGHE = 100;
    string v[N_STRINGHE];
    string chiave = "qwertyuioplkjhgfdsazxcvbnm";
    int n_righe = leggi_stringhe("chiaro.txt", v);
    for (int i = 0; i < n_righe; ++i) {
        //v[i] = codifica_cesare(v[i], 8);
        v[i] = codifica_sostituzione(v[i], chiave);
    }
    scrivi_stringhe("cifrato.txt", v, n_righe);
    return 0;
}
