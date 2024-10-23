#include <iostream>

using namespace std;

void suskaiciuotiPerimetra(int krastine) {
    int Perimetras = 4 * krastine;
    cout << "Perimetras:" << Perimetras << endl;
}
void suskaiciuotiPlota(int krastine) {
    int Plotas = krastine * krastine;
    cout << "Plotas: " << Plotas << endl;
}

int main() {

    int krastine;
    cout << "Iveskite krastines ilgi" << endl;
    cin >> krastine;

    suskaiciuotiPerimetra(krastine);
    suskaiciuotiPlota(krastine);

    return 0;
}
