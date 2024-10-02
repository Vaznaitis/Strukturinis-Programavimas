#include <iostream>
using namespace std;

int main() {

    int pazymys;

    cout << ("Rezultatai:\n") << endl;
    cout << ("Jei gavote 10, spauskite 1\n") << endl;
    cout << ("Jei gavote 9, spauskite 2\n") << endl;
    cout << ("Jei gavote 7-8, spauskite 3\n") << endl;
    cout << ("Jei gavote 5-6, spauskite 4\n") << endl;
    cout << ("Jei gavote 0-4, spauskite 5\n") << endl;
    cin >> pazymys;

    switch (pazymys) {
        case 1:
            cout << ("Puiku.\n") << endl;
        break;
        case 2:
            cout << ("Labai gerai.\n") << endl;
        break;
        case 3:
            cout << ("Gerai.\n") << endl;
        break;
        case 4:
            cout << ("Patenkinimai.\n") << endl;
        break;
        case 5:
            cout << ("Egzaminas neislaikytas.\n") << endl;
        break;
    }

        return 0;


    return 0;

}
