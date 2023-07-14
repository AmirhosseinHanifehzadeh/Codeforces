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
        int b = 0; 
        int t = n; 

        while (t >= b) { 
            int mid = b + (t - b) / 2; 
            int f = mid - b + 1; 

            if (x[mid] < m) {
                r += f;
                b = mid + 1; 
            } 

            if (x[mid] > m) t = mid - 1; 

            if (x[mid] == m) {
                r += f;
                while (x[mid] == x[mid + 1] && mid != n - 1) {
                    mid++;
                    r++; 
                }
                break; 
            }
        }

        cout << r << endl; 
    } 
} 