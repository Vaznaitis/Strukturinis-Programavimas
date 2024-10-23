#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}
int skirtumas(int a, int b) {
    return a - b;
}
int sandauga(int a, int b) {
    return a * b;
}
double dalyba(int a, int b) {
    if (b == 0) {
        cout << "Negalima dalinti is ";
        return 0;
    } else {
        return a / b;
    }
}
int main(){

    int skaicius1;
    int skaicius2;
    cout << "Iveskite pirmaji skaiciu:" << endl;
    cin >> skaicius1;
    cout << "Iveskite antraji skaiciu:" << endl;
    cin >> skaicius2;

    cout << "Suma: " << suma(skaicius1, skaicius2) << endl;
    cout << "Skirtumas: " << skirtumas(skaicius1, skaicius2) << endl;
    cout << "Sandauga: " << sandauga(skaicius1, skaicius2) << endl;
    cout << "Dalyba: " << dalyba(skaicius1, skaicius2) << endl;

    return 0;
}
