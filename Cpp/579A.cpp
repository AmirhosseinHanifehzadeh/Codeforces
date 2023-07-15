#include <bits/stdc++.h>

using namespace std; 

int main() {
    int x, res; cin >> x; 
    res = 0; 

    while (x) {
        if (x & 1)
            res++; 
        x >>= 1;  
    }

    cout << res; 
}