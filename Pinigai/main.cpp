#include <iostream>
using namespace std;

enum valiuta {
    EUR, // Euro
    GBP, // British Pound
    USD, // US Dollar
    INR  // Indian Rupee
};

// Define exchange rates relative to EUR
const double EUR_TO_GBP = 0.8593;
const double EUR_TO_USD = 1.0713;
const double EUR_TO_INR = 88.8260;

int main() {
    int choice;
    double amount;

    // Present options to the user
    cout << "Euro keitimas i Svarus, spauskite 1 \n";
    cout << "Svaro keitimas i eurus, spauskite 2 \n";
    cout << "Euro keitimas i Amerikietiskus dolerius, spauskite 3 \n";
    cout << "Amerikietisku doleriu keitimas i eurus, spauskite 4 \n";
    cout << "Euro keitimas i Indijos rupijas, spauskite 5 \n";
    cout << "Indijos rupiju keitimas i eurus, spauskite 6 \n";

    // Take the user's choice as input
    cin >> choice;

    // Ask for the amount to be converted
    cout << "Enter the amount: ";
    cin >> amount;

    // Perform conversion based on user's choice
    switch (choice) {
        case 1: // Euro to GBP
            cout << "GBP = " << amount * EUR_TO_GBP << endl;
        break;
        case 2: // GBP to Euro
            cout << "EUR = " << amount / EUR_TO_GBP << endl;
        break;
        case 3: // Euro to USD
            cout << "USD = " << amount * EUR_TO_USD << endl;
        break;
        case 4: // USD to Euro
            cout << "EUR = " << amount / EUR_TO_USD << endl;
        break;
        case 5: // Euro to INR
            cout << "INR = " << amount * EUR_TO_INR << endl;
        break;
        case 6: // INR to Euro
            cout << "EUR = " << amount / EUR_TO_INR << endl;
        break;
        default:
            cout << "Neteisingas pasirinkimas!" << endl;
        break;
    }

    return 0;
}