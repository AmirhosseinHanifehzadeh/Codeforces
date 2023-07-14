#include <bits/stdc++.h>

using namespace std; 

 int main() {
    string s1, s2; 
    cin >> s1; 
    cin >> s2; 

    int n = s1.length();
    long long a1, a2; a1 = 0; a2 = 0;  

    for (int i = 0; i < n; i++) {
        a1 += (int)tolower(s1[i]);
        a2 += (int)tolower(s2[i]);
    }   

    int output = 0; 

    if (a1 - a2 < 0) 
        output = -1; 
    else if (a1 - a2 > 0)
        output = 1; 

    cout << output; 
 }