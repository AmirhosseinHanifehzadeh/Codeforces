#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m; 
    int a[n];
    map<int, int> mp;  
    int dp[n]; 
    dp[n - 1] = 1; 

    for (int i = 0; i < n; i++) cin >> a[i]; 
    mp[a[n - 1]] = 1;
    

    for (int i = n - 2; i > -1; i--) {
        if (mp.find(a[i]) != mp.end()) dp[i] = dp[i + 1];
        else {
            dp[i] = dp[i + 1] + 1; 
            mp[a[i]] = 1; 
        }
    }

    for (int i = 0; i < m; i++) {
        int l; cin >> l; 
        cout << dp[l - 1] << endl; 
    }
}
