// File: problem9.cpp
// Purpose: Game with teddy bears that returns number of bears according to some rules
// Author: Raghad Mohammed Suliman
// Section: S12
// ID: 20220704
// TA: Samar Sabry
// Date: 29 Oct  2023


#include <iostream>

using namespace std;

// creating B function to be able to modify n (numbers of bears) when it is not equal to 42
bool B(int n){
    if(n == 42) {
        return true;
    }
    else {
        return false;
    }
}

bool bears(int n) {
    if (B(n)){
        return true;
    }
    else{
        do {
            // checking with every condition that (n)didn't reach 42
            if (n % 5 == 0 && B(n) == 0) {
                n -= 42;
            }
            if (n % 3 == 0  && B(n) == 0) {
                n -= (n % 10) * ((n % 100) / 10);
                }
            if (n % 4 == 0 && B(n) == 0){
                n -= (n % 10) * ((n % 100) / 10);
            }
            if (n % 2 == 0 && n != 42) {
                n -= n / 2;
            }
                // incase none of the conditions were met then this number can't be reduced to 42
                else {
                  return B(n);
            }

        }while(n > 42 );
         return  B(n);
}
    }





int main (){

 // boolapha is just for format to make it true of false instade of zero or one
cout << std :: boolalpha << bears(250) << endl;
    return 0;
}

