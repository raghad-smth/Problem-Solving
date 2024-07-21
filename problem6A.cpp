// File: problem6A.cpp
// Purpose: Using recursion to convert decimal number to its binary
// Author: Raghad Mohammed Suliman
// Section: S12
// ID: 20220704
// TA: Samar Sabry
// Date: 29 Oct  2023


#include <iostream>
#include <string>

using namespace std;


string binary(int dec){
    if (dec == 0 || dec == 1) {
        return to_string(dec);
    }
    else {
        return (binary(dec/2) ) + to_string(dec%2);
    }
}



int main(){

      int decimal;
      cout << "Please enter a positive decimal number to convert to binary :" ;
      cin >> decimal;
      cout << binary(decimal);






    return 0;
}

