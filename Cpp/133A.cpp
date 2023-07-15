#include <bits/stdc++.h>

using namespace std; 

int main() {
    string s, output; 
    output = "NO"; 
    cin >> s; 
    for (char i : s) {
        if (i == 'H' || i == 'Q' || i == '9') {
            output = "YES";
            break;
        }
    }

    cout << output;
}