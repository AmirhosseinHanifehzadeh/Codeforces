#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; cin >> t; 
    while (t--) {
        int a; cin >> a; 

        string s = 360 % (180 - a) ? "NO" : "YES"; 

        cout << s << endl; 
    }
}