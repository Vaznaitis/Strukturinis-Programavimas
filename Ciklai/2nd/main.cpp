#include <iostream>
using namespace std;

int main() {

    int ivertinimas = 8;

    if (ivertinimas == 10) {
        cout << "Puiku" << endl;
    } else if (ivertinimas >= 9) {
        cout << "Labai gerai" << endl;
    } else if (ivertinimas >= 7) {
        cout << "Gerai" << endl;
    } else if (ivertinimas >= 5) {
        cout << "Patenkinimai" << endl;
    } else {
        cout << "Egzaminas neislaikytas" << endl;
    }

    return 0;
}
