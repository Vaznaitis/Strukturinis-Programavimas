#include <iostream>
using namespace std;

void celsiusToFahrenheit(double tempCelsius) {
    double tempFahrenheit = tempCelsius * 9 / 5 + 32;
    cout << tempCelsius << "C = " << tempFahrenheit << "F" << endl;
}
void fahrenheitToCelsius(double tempFahrenheit, double& tempCelsius) {
    tempCelsius = (tempFahrenheit - 32) * 5 / 9;
    cout << tempFahrenheit << "F = " << tempCelsius << "C" << endl;
}

int main() {
    double tempCelsius;
    double tempFahrenheit;
    cout << "Iveskite temperatura konvertavimui is Celsijaus i Farenheita: " << endl;
    cin >> tempCelsius;
    celsiusToFahrenheit(tempCelsius);

    cout << "Iveskite temperatura konvertavimui is Farenheito i Celsiju: " << endl;
    cin >> tempFahrenheit;
    fahrenheitToCelsius(tempFahrenheit, tempCelsius);

    return 0;
}
