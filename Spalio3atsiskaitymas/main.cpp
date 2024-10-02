#include <iostream>
using namespace std;

int main() {

    int pasirinkimas;
    double kiekis;

    double EUR_GPB = 0.8593;
    double EUR_USD = 1.0713;
    double EUR_INR = 88.8260;
    double GPB_EUR = 1/EUR_GPB;
    double USD_EUR = 1/EUR_USD;
    double INR_EUR = 1/EUR_INR;

    cout <<"Konvertavimo pasirinkimas:\n";
    cout <<"1. EUR keitimas i GPB\n";
    cout <<"2. EUR keitimas i USD\n";
    cout <<"3. EUR keitimas i INR\n";
    cout <<"4. GPB keitimas i EUR\n";
    cout <<"5. USD keitimas i EUR\n";
    cout <<"6. INR keitimas i EUR\n";

    cin >> pasirinkimas;

    cout <<"Iveskite savo pasirinktos valiutos kieki\n";
    cin >> kiekis;

    switch (pasirinkimas) {
        case 1: cout << kiekis <<" EUR = "<<kiekis*EUR_GPB<<" GPB"<<endl;
        break;
        case 2: cout << kiekis <<" EUR = "<<kiekis*EUR_USD<<" USD"<<endl;
        break;
        case 3: cout << kiekis <<" EUR = "<<kiekis*EUR_INR<<" INR"<<endl;
        break;
        case 4: cout << kiekis <<" GPB = "<<kiekis*GPB_EUR<<" EUR"<<endl;
        break;
        case 5: cout << kiekis <<" USD = "<<kiekis*USD_EUR<<" EUR"<<endl;
        break;
        case 6: cout << kiekis <<" INR = "<<kiekis*INR_EUR<<" EUR"<<endl;
        break;
    }


    return 0;
}
