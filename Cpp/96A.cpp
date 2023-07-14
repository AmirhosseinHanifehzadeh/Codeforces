#include <bits/stdc++.h>

using namespace std; 

int main() {
    string s; cin >> s; 
    int n = s.length();

    bool is_den = false; 

    tuple <int, char> r; 
    
    r = make_tuple(1, s[0]);

    for (int i = 1; i < n; i++) {
        if (get<1>(r) == s[i]) {
            get<0>(r) += 1;
            if (get<0>(r) == 7) {
                is_den = true;
                break; 
            }
        }
        else {
            get<0>(r) = 1;
            get<1>(r) = s[i]; 
        }
    }

    is_den ? s = "YES" : s = "NO"; 
    cout << s; 
}