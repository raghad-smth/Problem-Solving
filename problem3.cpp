// File: problem3.cpp
// Purpose: Spliting a given string according to a given  delimiter
// Author: Raghad Mohammed Suliman
// Section: S12
// ID: 20220704
// TA: Samar Sabry
// Date: 29 Oct  2023


#include <iostream>
#include <string>
#include <vector>
using namespace std;

string split ( string target,string del){
    vector <string> v;
    string ready;
    // Cause the user will insert the last element not followed by a delimiter
    target+=del;
    for (int i=0; i<target.size(); i++){
        // Filling "ready" with chars from target until it hits the delimiter
        if (target.find(del) != i) {
            ready += target[i];
        }
        else {
            // erasing the del so the find function can get the index of the next delimiter
            target.erase(i,del.size());
            // To be able to accses the element that has been shifted to a smaller index due to erasing form the string
            --i;
            v.push_back(ready);
            ready = " ";
        }

    }
   for(string  s : v){
       cout << s << " ";
   }


}

int main() {

    string target,del;
    cout << "Enter the string target : ";
    getline(cin, target);
    cout << "Enetr the string delimiter : ";
    getline(cin, del);
    split(target,del);


    return 0;
}

