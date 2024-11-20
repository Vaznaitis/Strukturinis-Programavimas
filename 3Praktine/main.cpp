#include <iostream>
#include <cstring>

using namespace std;

const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

string Uzsifravimas(char tekstas[],char raktas[]) {
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int indeksasRezultato;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int x = 0; x < sizeof(ABECELE); x++) {
            if(toupper(tekstas[i]) == ABECELE[x]) {
                indeksasTeksto=x;
            }
            if(toupper(raktas[i]) == ABECELE[x]) {
                indeksasRakto=x;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
                indeksasRezultato = (indeksasTeksto + indeksasRakto) % sizeof(ABECELE);
                rezultatas[i] = ABECELE[indeksasRezultato];
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}
string Desifravimas(char tekstas[],char raktas[]) {
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int indeksasRezultato;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int x = 0; x < sizeof(ABECELE); x++) {
            if(toupper(tekstas[i]) == ABECELE[x]) {
                indeksasTeksto=x;
            }
            if(toupper(raktas[i]) == ABECELE[x]) {
                indeksasRakto=x;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
                indeksasRezultato = (indeksasTeksto - indeksasRakto + sizeof(ABECELE)) % sizeof(ABECELE);
                rezultatas[i] = ABECELE[indeksasRezultato];
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}
int main() {
    char tekstas[100];
    char raktas[100];
    string rezultatas;
    int pasirinkimas;
    cout << "Pasirinkite sifravimo buda:" << endl;
    cout << "1. Naudojant abecele" << endl;
    cout << "2. Naudojant ASCII koduote" << endl;
    cout << "Iveskite savo pasirinkima:" << endl;
    cin >> pasirinkimas;
    if (pasirinkimas != 3) {
        cout << "Pasirinkite kokia operacija norite atlikti:" << endl;
        cout << "1. Sifruoti/Desifruoti naudojant abecele" << endl;
        cout << "2. Sifruoti/Desifruoti naudojant ASCII koduote" << endl;
        cout << "3. Iseiti" << endl;
        cout << "Iveskite savo pasirinkima:" << endl;
        cin >> pasirinkimas;
    }
    if (pasirinkimas == 1) {
        int pasirinkimas2;
        cout << "Pasirinkite kokia operacija norite atlikti:" << endl;
        cout << "1. Sifruoti naudojant abecele" << endl;
        cout << "2. Desifruoti naudojant abecele" << endl;
        cout << "Iveskite savo pasirinkima:" << endl;
        cin >> pasirinkimas2;
        if (pasirinkimas2 == 1) {
            cout << "Iveskite teksta kuri norite uzsifruoti" << endl;
            cin>>tekstas;
            cout << "Iveskite rakta kuri naudosite" << endl;
            cin>>raktas;
            rezultatas = Uzsifravimas(tekstas, raktas);
            cout << "Uzsifruotas tekstas: "<< rezultatas << endl;
        }
        else if (pasirinkimas2 == 2) {
            cout <<"Iveskite teksta kuri norite desifruoti:"<<endl;
            cin>>tekstas;
            cout <<"Iveskite rakta kuri naudosite:"<<endl;
            cin>>raktas;
            rezultatas = Desifravimas(tekstas, raktas);
            cout << "Desifruotas tekstas: "<< rezultatas << endl;
        }
    }
return 0;}