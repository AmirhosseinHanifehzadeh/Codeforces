#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; cin >> t; 

    while (t--)
    {
        long long n, k; cin >> n >> k; 
	
        string result = n % 2 == k % 2 && k * k <= n ? "YES" : "NO";

        cout << result << endl; 
    } 
}
