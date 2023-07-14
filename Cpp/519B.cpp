#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 

    int a[n]; 
    int b[n - 1]; 
    int c[n - 2]; 

    bool f1 = true; 
    bool f2 = true; 

    for (int i = 0; i < n; i++) cin >> a[i]; 
    for (int i = 0; i < n - 1; i++) cin >> b[i];
    for (int i = 0; i < n - 2; i++) cin >> c[i]; 

    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2); 

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != b[i]) {
            cout << a[i] << endl; 
            f1 = false;  
            break; 
        }
    }
    if (f1) cout << a[n - 1] << endl; 

    for (int i = 0; i < n - 2; i++) {
        if (b[i] != c[i]) {
            cout << b[i] << endl; 
            f2 = false; 
            break;
        }
    }
    if (f2) cout << b[n - 2] << endl; 
}