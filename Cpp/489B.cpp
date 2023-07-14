#include <bits/stdc++.h>

using namespace std; 

int main() {
    // boys
    int n; cin >> n; 
    int a[n]; 
    for (int i = 0; i < n; i++) cin >> a[i]; 
    // girls
    int m; cin >> m; 
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i]; 

    sort(a, a + n); 
    sort(b, b + m); 

    int result = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i] - b[j]) <= 1) {
                    result++;
                    a[i] = 10000;
                    b[j] = 10000; 
                    break; 
            }
        }
    }

    cout << result; 
}