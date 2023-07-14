#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 

    int arr[n]; 
    int a = 1;
    int b = 1;   

    for (int i = 0; i < n; i++) cin >> arr[i]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            b++; 
            a = max(a, b); 
        }
        else b = 1; 
    }
    cout << max(a, b); 
}