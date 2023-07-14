#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 
    int x[n];
    for (int i = 0; i < n; i++) cin >> x[i]; 

    int q; cin >> q; 

    sort(x, x + n); 

    while (q--) {
        int m; cin >> m;
        int r = 0;   

        for (int i = 0; i < n; i++) {
            if (x[i] > m) break;
            r++;
        }

        cout << r << endl; 
    } 
} 