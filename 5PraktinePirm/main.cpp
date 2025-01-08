#include <iostream>

using namespace std;

int main() {
    int eilutes;
    int stulpeliai;
    int eilutesSuma=0;
    int stulpelioSuma=0;
    int max=0;

    cout << "Iveskite eiluciu skaiciu:" << endl;
    cin >> eilutes;
    cout << "Iveskite stulpeliu skaiciu:" << endl;
    cin >> stulpeliai;

    int ab[eilutes][stulpeliai];

    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            cout << "Iveskite elemento "<<i+1<<" "<<j+1<<" verte"<< endl;
            cin >> ab[i][j];
        }
    }

    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            if(max < ab[i][j]) {
                max = ab[i][j];
            }   cout << ab[i][j] <<" ";
        }
        cout<<endl;
    }
    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            eilutesSuma+=ab[i][j];
        }
        cout << "Eilutes "<<i+1<<" suma: "<<eilutesSuma;
        eilutesSuma=0;
        cout<<endl;
    }
    for(int j=0;j < stulpeliai;j++) {
        for(int i=0;i < eilutes;i++) {
            stulpelioSuma+=ab[i][j];
        }
        cout << "Stulpelio "<<j+1<<" suma: "<<stulpelioSuma;
        stulpelioSuma=0;
        cout<<endl;
    }

    cout<<"Didziausia verte: "<< max<<endl;

    return 0;
}