#include <iostream>

using namespace std;

double getAverage(double, double); // prototipas

int main(){

    cout <<"Vidurkis "<<getAverage(17.5,25)<<endl;
    return 0;
}

double getAverage(double num1, double num2) {
    return (num1 + num2) / 2;
}