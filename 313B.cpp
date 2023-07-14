#include <bits/stdc++.h>

using namespace std; 


int main() {
    string s; cin >> s; 

    int n = s.length();

    int t; cin >> t;

    int res[n];
    int sum[n + 1];
    int a = 0;  

    res[0] = 0; 
    sum[0] = 0; 
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) res[i + 1] = 1;
        else res[i + 1] = 0;
    } 

    for (int i = 1; i < n + 2; i++) {
        a += res[i - 1]; 
        sum[i] = a; 
    }

    while (t--) {
        int l, r; cin >> l >> r; 

        cout << sum[r] - sum[l] << endl; 
    }
}