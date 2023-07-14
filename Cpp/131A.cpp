#include <bits/stdc++.h>

using namespace std; 

int main() {
    string s; cin >> s;

    string t = s; 
    bool isAllUpper = true;  

    if (!isupper(s[0])) isAllUpper = false;
    t[0] = toupper(t[0]);

    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            t[i] = tolower(t[i]);
        }    
        else {
            t = s;  
            isAllUpper = false; 
            break;
        } 
    }

    if (isAllUpper) {
        for (int i = 0; i < s.length(); i++) t[i] = tolower(t[i]);
    }

    cout << t; 
}