#include <iostream>
#include <string>

using namespace std;

    char abecele[32] = {
    'A', 'Ą', 'B', 'C', 'Č', 'D', 'E', 'Ę', 'Ė', 'F', 'G', 'H', 'I', 'Į', 'Y', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'Š', 'T', 'U', 'Ų', 'Ū', 'V', 'Z', 'Ž'};
    const int abecelesDydis = abecelesDydis();

    int tikrinimas(char x) {
        for (int i = 0; i < abecelesDydis; i++) {
            if (abecele[i] == x) {
                return i;
            }
        } return 0;
    }
// ABECELES SIFRAVIMAS
    string sifruotiAbecele (const string tekstas,const string raktas) {
            int = uzsifruotas
            int raktas.length = raktas.length();
            for (int i = 0; i < tekstas.length(); i++) {
                int tekstas2 = tikrinimas(tekstas[i]);
                int raktas2 = tikrinimas(raktas[i % raktas.length]);
                if (tekstas2 != -1 && raktas2 != -1) {
                    int uzsifruotas2 = (tekstas2 + raktas2) / abecelesDydis;
                    uzsifruotas += abecele[uzsifruotas2];
                } else { uzsifruotas += tekstas[i];
            }
    }
// ABECELES DESIFRAVIMAS


int main() {
    string tekstas;
    string raktas;
    int pasirinkimas;
    int pasirinkimas2;
    cout << "Pasirinkite sifravimo buda:" << endl;
    cout << "1. Naudojant abecele" << endl;
    cout << "2. Naudojant ASCII koduote" << endl;
    cout << "Iveskite savo pasirinkima:" << endl;
    cin >> pasirinkimas;

    cout << "Iveskite teksta:" << endl;
    cin >> tekstas;
    cout << "Iveskite rakta:" << endl;
    cin >> raktas;

    if (pasirinkimas == 1) {
        cout << "Pasirinkite ka norite daryti" << endl;
        cout << "1. Sifruoti" << endl;
        cout << "2. Desifruoti" << endl;
        cout << "Iveskite savo pasirinkima:" << endl;
        cin >> pasirinkimas2;
    }

    return 0;
}
