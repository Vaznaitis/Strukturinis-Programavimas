#include <iostream>
using namespace std;

int main() {

    int pazymys1 = 5;
    int pazymys2 = 7;
    int pazymys3 = 9;
    int pazymys4 = 8;
    int pazymys5 = 10;

    float vidurkis = (pazymys1 + pazymys2 + pazymys3 + pazymys4 + pazymys5) / 5;

    if (vidurkis >= 5) {
        cout << "Vidurkis teigiamas" << endl;
    } else {
        cout << "Vidurkis neigiamas" << endl;
    }

    return 0;
}
