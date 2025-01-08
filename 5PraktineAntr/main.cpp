#include <iostream>

using namespace std;

struct studentas {
    int id{};
    string vardas;
    string pavarde;
    int telefonas{};
};

int main() {
    int dydis;
    cout << "Pasirinkite kiek studentu norite sarase:";
    cin >> dydis;
    studentas *masyvas = new studentas[dydis];
    int kiekis = -1;
    int pasirinkimas;
    int trinti, trinti2, atnaujinti, atnaujinti2;

    while (pasirinkimas != 5) {
        cout << "Pasirinkite ka norite atlikti su masyvu" << endl;
        cout << "1. Prideti studenta ir jo duomenis" << endl;
        cout << "2. Atspausdinti visa masyva" << endl;
        cout << "3. Istrinti studenta pagal ID" << endl;
        cout << "4. Atnaujinti studento duomenis pagal ID" << endl;
        cout << "5. Iseiti" << endl;
        cout << "Pasirinkimas: " << endl;
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                cout << "Iveskite studento ID" << endl;
                cin >> masyvas[kiekis + 1].id;
                cout << "Iveskite studento varda" << endl;
                cin >> masyvas[kiekis + 1].vardas;
                cout << "Iveskite studento pavarde" << endl;
                cin >> masyvas[kiekis + 1].pavarde;
                cout << "Iveskite studento telefona" << endl;
                cin >> masyvas[kiekis + 1].telefonas;
                kiekis++;
                break;

            case 2:
                for (int i = 0; i < kiekis + 1; i++) {
                    cout << i + 1 << ". " << masyvas[i].id << " " << masyvas[i].vardas << " " << masyvas[i].pavarde << " " << masyvas[i].telefonas << endl;
                }
                break;

            case 3:
                cout << "Pasirinkite studenta pagal ID, kuri norite istrinti is saraso: " << endl;
                cin >> trinti;
                for (int i = 0; i < kiekis + 1; i++) {
                    if (masyvas[i].id == trinti) {
                        trinti2 = i;
                    }
                }
                for (int i = trinti2; i < kiekis; i++) {
                    masyvas[i].id = masyvas[i + 1].id;
                    masyvas[i].vardas = masyvas[i + 1].vardas;
                    masyvas[i].pavarde = masyvas[i + 1].pavarde;
                    masyvas[i].telefonas = masyvas[i + 1].telefonas;
                }
                kiekis -= 1;
                break;

            case 4:
                cout << "Pasirinkite studenta pagal ID, kurio duomenis norite atnaujinti: " << endl;
                cin >> atnaujinti;
                for (int i = 0; i < kiekis + 1; i++) {
                    if (masyvas[i].id == atnaujinti) {
                        atnaujinti2 = i;
                    }
                }

                cout << "Iveskite nauja studento ID:" << endl;
                cout << "Senas: " << masyvas[atnaujinti2].id << endl;
                cin >> masyvas[atnaujinti2].id;
                cout << "Iveskite nauja studento varda:" << endl;
                cout << "Senas: " << masyvas[atnaujinti2].vardas << endl;
                cin >> masyvas[atnaujinti2].vardas;
                cout << "Iveskite nauja studento pavarde:" << endl;
                cout << "Senas: " << masyvas[atnaujinti2].pavarde << endl;
                cin >> masyvas[atnaujinti2].pavarde;
                cout << "Iveskite nauja studento telefona:" << endl;
                cout << "Senas: " << masyvas[atnaujinti2].telefonas << endl;
                cin >> masyvas[atnaujinti2].telefonas;
                break;
        }
    }
    delete[] masyvas;

    return 0;
}
