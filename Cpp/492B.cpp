#include <bits/stdc++.h>

using namespace std; 

int main() {
    long long n ,l; cin >> n >> l; 

    double a[n];
    double r = 0; 
    long long i = 0; 

    for (long long i = 0; i < n; i++) cin >> a[i]; 

    sort(a,a + n);

    if (a[0] != 0) {
        r = a[0];
        i = 1; 
    }  
    for (; i < n - 1; i++) {
        double d = (a[i + 1] - a[i]) / 2;
        if (d > r) r = d; 
    }

    if (a[n - 1] != l) {
        if (l - a[n - 1] > r) r = l - a[n - 1]; 
    }

    cout << r; 
}