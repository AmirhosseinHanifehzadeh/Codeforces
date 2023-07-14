#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, res, j; 
    string s, f;  

    cin >> n; 
    cin >> s;
    f = "";
    f += s[0];
    res = 0;   
    j = 0; 

    for (int i = 1; i < n; i++) {
        if (s[i] != f[j]) {
            f += s[i]; 
            j++; 
            continue;
        }  
        res++; 
    }

    cout << res; 
}