#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, m, k; cin >> n >> m >> k;

    int x[m + 1]; 

    int result = 0; 

    for (int i = 0; i < m + 1; i++) cin >> x[i]; 

    for (int i = 0; i < m; i++) {
        int count = 0; 
        int n = x[i] ^ x[m];

        while(n != 0) {
            if (n % 2) count++; 
            n >>= 1; 
        }

        if (count <= k) result++; 
    }

    cout << result; 
}