#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int generateRandomNumber() {
    return (rand() % 100) + 1;
}

// BALSIU TIKRINIMAS (CASE 1)
void balses(char x) {
    if (!isalpha(x)) {
        cout << "Ivestas simbolis nera raide" << endl;
        return;
    }
    if (x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u')
        cout << "Ivesta raide yra balse" << endl;
    else
        cout << "Ivesta raide nera balse" << endl;
}

// DVIEJU SKAITMENU BENDRO DALIKLIO RADIMAS (CASE 2)
int euklidas(int a, int b) {
    while (b != 0) {
        int xyz = b;
        b = a % b;
        a = xyz;
    }
    return a;
}

// SKAICIU SPELIOJIMO ZAIDIMAS (CASE 3)
void zaidimas() {
    int randskaic = generateRandomNumber();
    int spejimas;
    cout << "Spekite skaiciu nuo 1 iki 100" << endl;
    while (true) {
        cout << "Iveskite savo spejima:" << endl;
        cin >> spejimas;
        if (spejimas > randskaic) {
            cout << "Jusu ivestas skaicius yra per didelis, bandykite dar karta" << endl;
        } else if (spejimas < randskaic) {
            cout << "Jusu ivestas skaicius yra per mazas, bandykite dar karta" << endl;
        } else {
            cout << "Ivedete teisinga skaiciu!" << endl;
            break;
        }
    }
}

// FIZZBUZZ (CASE 4)
void fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Fizzbuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

void meniu() {
    while (true) {
        cout << "\nMeniu:" << endl;
        cout << "1. Raides tikrinimas ar balse" << endl;
        cout << "2. Dvieju skaitmenu bendro daliklio radimas" << endl;
        cout << "3. Skaiciu speliojimo zaidimas" << endl;
        cout << "4. Fizzbuzz" << endl;
        cout << "5. Iseiti is programos\n" << endl;
        cout << "Iveskite savo pasirinkima:" << endl;

        int pasirinkimas;
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                char raide;
                cout << "Iveskite raide:" << endl;
                cin >> raide;
                balses(raide);
                break;
            }
            case 2: {
                int skaicius1;
                int skaicius2;
                cout << "Iveskite pirmaji skaiciu: " << endl;
                cin >> skaicius1;
                cout << "Iveskite antraji skaiciu: " << endl;
                cin >> skaicius2;
                cout << "Didziausias bendras daliklis yra: " << euklidas(skaicius1, skaicius2) << endl;
                break;

            }
            case 3: {
                zaidimas();
                break;
            }
            case 4: {
                int n;
                cout << "Iveskite teigiama sveika skaiciu:" << endl;
                cin >> n;
                fizzbuzz(n);
                break;
            }
            case 5: {
                cout << "Isejote is programos" << endl;
                return;
            }
            default:
                cout << "Tokio pasirinkimo nera, bandykite dar karta" << endl;
        }
    }

}

int main() {
        meniu();
        return 0;
    }