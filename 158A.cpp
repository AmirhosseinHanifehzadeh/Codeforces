#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, k; cin >> n >> k; 

    int b = 0; 
    int a[n + 1]; 
    int r = 0; 

    for (int i = 1; i < n + 1; i++) {
        cin >> a[i]; 
        if (i == k) 
            b = a[i]; 
    }

    for (int i = 1; i < n + 1; i++) {
        if (a[i] && a[i] >= b) 
            r++; 
    }

    cout << r; 
}