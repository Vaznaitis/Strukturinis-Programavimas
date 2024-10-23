#include <iostream>

using namespace std;

void skaiciupalyginimas(int a, int b) {
    if (a > b) {
        cout << a << " yra didesnis uz " << b << endl;
    } else if (a < b) {
        cout << a << " yra mazesnis uz " << b << endl;
    } else {
        cout << "Skaiciai " << a << " ir " << b << " yra lygus" << endl;
    }
}

int main(){

    int skaicius1;
    int skaicius2;
    cout << "Iveskite pirmaji skaciu:" << endl;
    cin >> skaicius1;
    cout << "Iveskite antraji skaciu:" << endl;
    cin >> skaicius2;
    skaiciupalyginimas(skaicius1, skaicius2);
    return 0;

}

// Vietoj skirtingu skaiciu suvedimu i koda, zmogus gali pats ivesti kiek reikia kartu.