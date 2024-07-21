// File: problem12.cpp
// Purpose: Program that look for the words mainly used in spam emails in
// Author: Raghad Mohammed Suliman
// Section: S12
// ID: 20220704
// TA: Samar Sabry
// Date: 29 Oct  2023

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// a list of the most used phrases ,words and compnay names in phishing messages

string spam[30] = {"label", "invoice", "Click", "don't miss out on this once in a lifetime offer",
                   "Sample", "password", "Expires soon", "now", "immediately",
                   "Bonus", "Winner", "Risk-free", "cutie", "babes", "Not spam",
                   "We hate spam", "This is not fraud",  "confidentiality", "very cheap",
                   "Important! Your password is about to expire", "Urgent",
                   "Apple", "Netflix", "Yahoo", "WhatsApp", "PayPal",
                   "Chase", "Facebook" , "Microsoft", "eBay"};

// array to hold the values of the points to each spam word due its likeliness to be in a phishing message
// each point will be in the same index as its spam word to be able to link them using the same index in both arrays
int points[30] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 2, 3, 2, 2, 2, 3,
                  3, 3, 2, 2, 3, 2, 3, 3, 3, 3, 3, 2, 2,
                  1 , 1
                  };

int main() {

    string line; // to store the line after reading it from the file
    int wordSpamCnt = 0, totalSpamCnt=0;
    // creating an object of class ifsteam cause we will only need to read from the file
    ifstream iff;
    // looping to check for all the 30 spam words
    for (int i = 0; i < 30; i++) {
        // re-seting the wordSpamCnt to zero at the beging of the loop to look fot the next word
        wordSpamCnt = 0;
        iff.open("test.txt");
        // looping through the file line by line until it reached the end of the file
        while (getline(iff, line)) {
                for (int j = 0; j < line.size(); j++) {

                    if (line.find(spam[i]) != std::string::npos) {
                        // erasing the founded spam word so find can return the next spam word
                        line.erase(line.find(spam[i]), spam[i].size());
                        wordSpamCnt++;
                    }
                }
            }
             points[i]=(wordSpamCnt*points[i]);
             totalSpamCnt+=points[i];
             cout << spam[i] << ": " << wordSpamCnt << " " << points[i] <<  endl;
              iff.close();
        }
        cout << "Total Spam Cnt : " << totalSpamCnt << endl;



    return 0;
}
