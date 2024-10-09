#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int pasirinkimas;
    int pasirinkimas2;
    double kiekis;

    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;
    double USD_Bendras = 1.0713;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;
    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;
    double GPB_EUR = 1 / GBP_Bendras;
    double USD_EUR = 1 / USD_Bendras;
    double INR_EUR = 1 / INR_Bendras;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Pasirinkite ka norite atlikti su valiuta:\n"<<endl;
        cout << "1. Valiutios konvertavimas\n";
        cout << "2. Valiutos pirkimas\n";
        cout << "3. Valiutos pardavimas\n";
        cout << "4. Iseiti\n"<<endl;
        cout << "Jusu pasirinkimas: ";

        cin >> pasirinkimas;

        if (pasirinkimas == 4) {
            cout << "Jus isejote is programos.\n";
            break;
        }

        switch (pasirinkimas) {
            case 1: {
                cout << "Pasirinkite kokia valiuta norite konvertuoti:\n";
                cout << "1. EUR keitimas i GPB\n";
                cout << "2. EUR keitimas i USD\n";
                cout << "3. EUR keitimas i INR\n";
                cout << "4. GPB keitimas i EUR\n";
                cout << "5. USD keitimas i EUR\n";
                cout << "6. INR keitimas i EUR\n";
                cout << "Jusu pasirinkimas: ";
                cin >> pasirinkimas2;

                cout << "Iveskite kiek valiutos norite konvertuoti: ";
                cin >> kiekis;

                switch (pasirinkimas2) {
                    case 1: cout << kiekis << " EUR = " << kiekis * GBP_Bendras << " GPB\n";
                    break;
                    case 2: cout << kiekis << " EUR = " << kiekis * USD_Bendras << " USD\n";
                    break;
                    case 3: cout << kiekis << " EUR = " << kiekis * INR_Bendras << " INR\n";
                    break;
                    case 4: cout << kiekis << " GPB = " << kiekis * GPB_EUR << " EUR\n";
                    break;
                    case 5: cout << kiekis << " USD = " << kiekis * USD_EUR << " EUR\n";
                    break;
                    case 6: cout << kiekis << " INR = " << kiekis * INR_EUR << " EUR\n";
                    break;
                    default: cout << "Tokio pasirinkimo nera.\n";
                }
                break;
            }
            case 2: {
                cout << "Pasirinkite kokia valiuta norite pirkti:\n";
                cout << "1. Svaras (GBP)\n";
                cout << "2. Doleris (USD)\n";
                cout << "3. Rupija (INR)\n";
                cout << "Jusu pasirinkimas: ";
                cin >> pasirinkimas2;

                cout << "Iveskite uz kiek euru norite pirkti: ";
                cin >> kiekis;

                switch (pasirinkimas2) {
                    case 1: cout << "Uz " << kiekis << " EUR gausite " << kiekis * GBP_Pirkti << " GBP\n";
                    break;
                    case 2: cout << "Uz " << kiekis << " EUR gausite " << kiekis * USD_Pirkti << " USD\n";
                    break;
                    case 3: cout << "Uz " << kiekis << " EUR gausite " << kiekis * INR_Pirkti << " INR\n";
                    break;
                    default: cout << "Tokio pasirinkimo nera.\n";
                }
                break;
            }
            case 3: {
                cout << "Pasirinkite kokia valiuta norite parduoti:\n";
                cout << "1. Svaras (GBP)\n";
                cout << "2. Doleris (USD)\n";
                cout << "3. Rupija (INR)\n";
                cout << "Jusu pasirinkimas: ";
                cin >> pasirinkimas2;

                cout << "Iveskite kiek valiutos norite parduoti: ";
                cin >> kiekis;

                switch (pasirinkimas2) {
                    case 1: cout << "Pardavus " << kiekis << " GBP, gausite " << kiekis / GBP_Parduoti << " EUR\n";
                    break;
                    case 2: cout << "Pardavus " << kiekis << " USD, gausite " << kiekis / USD_Parduoti << " EUR\n";
                    break;
                    case 3: cout << "Pardavus " << kiekis << " INR, gausite " << kiekis / INR_Parduoti << " EUR\n";
                    break;
                    default: cout << "Tokio pasirinkimo nera.\n";
                }
                break;
            }
            default: cout << "Tokio pasirinkimo nera.\n";
        }
    }

    return 0;
}