#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k; 

        int q1 = k / (n - 1);
        double q2 = (double)k / (n - 1); 
        if (q1 == q2) q1--;  
        int a = k % (n - 1);
        if (a == 0) a = n - 1;  

        int result = n * q1 + a; 

        cout << result << endl; 
    }
}