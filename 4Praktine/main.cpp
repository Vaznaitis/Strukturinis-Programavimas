#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuKaina;
};

void getData(menuItemType menuList[]);
void showMenu(const menuItemType menuList[], int dydis);
void printCheck(const vector<pair<int, int>>& uzsakymas, const menuItemType menuList[], int size);

void getData(menuItemType menuList[]) {
    menuList[0] = {"Kiausiniene", 1.45};
    menuList[1] = {"Kiaulienos sonine su keptu kiausiniu", 2.45};
    menuList[2] = {"Keksiukas su vysnia", 0.99};
    menuList[3] = {"Prancuziskas skrebutis", 1.99};
    menuList[4] = {"Vaisiu salotos", 2.49};
    menuList[5] = {"Pusryciu dribsniai", 0.69};
    menuList[6] = {"Kava", 0.50};
    menuList[7] = {"Arbata", 0.75};
}

void showMenu(const menuItemType menuList[], int dydis) {
    cout << "Pasiulymai:" << endl;
    for (int i = 0; i < dydis; i++) {
        cout << i + 1 << ". " << setw(50) << left << menuList[i].menuItem << right << fixed << setprecision(2) << menuList[i].menuKaina << endl;
    }
}

void printCheck(const vector<pair<int, int>>& uzsakymas, const menuItemType menuList[], int size) {
    double viskas = 0;
    ofstream saskaitaFile("saskaita.txt");

    cout << "Jusu saskaita:" << endl;
    saskaitaFile << "Jusu saskaita:" << endl;

    for (const auto& item : uzsakymas) {
        int skaicius = item.first;
        int kiekis = item.second;
        double suma = menuList[skaicius].menuKaina * kiekis;
        viskas += suma;

        cout << kiekis << " " << menuList[skaicius].menuItem << fixed << setprecision(2) << suma << endl;
    }

    double mokesciai = viskas * 0.21;
    double sumaaa = viskas + mokesciai;

    cout << setw(30) << left << "Mokesciai: " << fixed << setprecision(2) << right << mokesciai << endl;
    cout << setw(30) << left << "Galutine suma: " << fixed << setprecision(2) << right << sumaaa << endl;

    saskaitaFile << setw(30) << left << "Mokesciai: " << fixed << setprecision(2) << right << mokesciai << endl;
    saskaitaFile << setw(30) << left << "Galutine suma: " << fixed << setprecision(2) << right << sumaaa << endl;

    saskaitaFile.close();
}

int main() {
    int pasirinkimas;
    int kiekis;
    int meniuDydis = 8;
    menuItemType menuList[meniuDydis];
    getData(menuList);

    vector<pair<int, int>> uzsakymas;

    cout << "Sveiki atvyke i restorana 'AAAAA'" << endl;
    cout << "Pasirinkite is meniu ka norite uzsisakyti" << endl;

    while (true) {
        showMenu(menuList, meniuDydis);
        cout << "Pasirinkite 0 jei norite uzbaigti uzsakyma" << endl;
        cout << "Pasirinkite ka norite uzsisakyti:" << endl;
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            break;
        }

        if (pasirinkimas < 1 || pasirinkimas > meniuDydis) {
            cout << "Tokio pasirinkimo nera" << endl;
            continue;
        }

        cout << "Iveskite patiekalo kieki:" << endl;
        cin >> kiekis;

        if (kiekis <= 0) {
            cout << "Ivestas netinkamas kiekis" << endl;
            continue;
        }

        uzsakymas.push_back({pasirinkimas - 1, kiekis});
    }

    printCheck(uzsakymas, menuList, meniuDydis);
    return 0;
}
