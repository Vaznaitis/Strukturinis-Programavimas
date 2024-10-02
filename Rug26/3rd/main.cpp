#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
void randomNumber(){
    int randomNum = rand()% 100;
    cout << randomNum << endl;
}

int main(){

    srand(time(0));

    for(int i = 0 ; i < 10 ; i++)
    randomNumber();
        return 0;
}

