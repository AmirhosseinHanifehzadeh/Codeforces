#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; cin >> t; 

    while(t--) {
        int n; cin >> n;
        int a[n]; 
        int x = 0; 
        for (int i = 0; i< n; i++) cin >> a[i]; 

        sort(a, a + n); 

        for (int i = 1; i < n; i++)  
            if (a[i] - a[i - 1]  < 2) a[i - 1] = -1; 
    
        for (int i = 0; i < n; i++) 
            if (a[i] != -1) x++ ;

        if (x == 1) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
}