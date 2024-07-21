// File: problem6B.cpp
// Purpose: Getting all the possible combnations of zeros and ones depending on a given number (k)
// Author: Raghad Mohammed Suliman
// Section: S12
// ID: 20220704
// TA: Samar Sabry
// Date: 29 Oct  2023


#include <iostream>
#include <string>
#include <vector>
using namespace std;




// to print the vector that function numbers will return
void print(vector <string> v){
    for (auto& s : v){
        cout << s << endl;
    }
}

// Different function to return only the prefix  in case of k == 0 ,
// since numbers will return vector of strings
string kZero (string prefix){
    return prefix;
}


vector <string>  numbers(string prefix, int k){
    vector <string> ans;
    // returning the prefix if k==0
    if ( k == 0){
       cout <<  kZero(prefix) << endl;
    }

    else if(k==1){
        for(int i=0; i<1; i++){
            ans.push_back(kZero(prefix) + '0');
            ans.push_back(kZero(prefix) + '1');
        }

    }
    else {
        //it will recurse back to k-1 till it reach zero to get the prefix,
        //then to one to get the base of the vector strings consists of prefix+0, prefix+1,
        for(auto& s : numbers(prefix,k-1)){
            // copying the string to reset it after concatnaitng the '0' to concatnait the '1'
            string ori = s;
            ans.push_back(s += '0');
            s = ori;
            ans.push_back(s += '1');

        }
    }
    return ans;

}


int main(){

    string prefix;
    int k;
    cout << "Enter the wanted prefix please : ";
    cin >> prefix;
    cout << "Enter the number of the wanted possiblest of zeros and ones (k) :";
    cin >> k;

    print(numbers(prefix, k));


    return 0;
}
