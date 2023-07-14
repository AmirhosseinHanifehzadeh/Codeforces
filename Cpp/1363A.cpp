#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; 
    cin >> t; 

    while (t--) {
        int n, x; cin >> n >> x; 

        int cnt[2]; 
        cnt[1] = cnt[0] = 0; 

        int a[n]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            cnt[a[i] % 2]++; 
        } 

        bool flag = false; 

        for (int i = 1; i <= cnt[1] && i <= x; i += 2) {
            if (x - i <= cnt[0]) 
                flag = true; 
        }

        string output = flag ? "YES" : "NO";
        cout << output << endl; 
    }
}