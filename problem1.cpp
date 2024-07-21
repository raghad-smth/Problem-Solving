//File:problem1.cpp
//Author:Adham Mohamed Ali
//section:s12
//ID:20200066
//TA:Samar Sabry
//Date:29 oct 2023
#include <bits/stdc++.h>
using namespace std;
void solve1() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << ' ';
    while (cin >> s) {
        cout << s << ' ';
    }
}

int main() {
   solve1();
    return 0;
}