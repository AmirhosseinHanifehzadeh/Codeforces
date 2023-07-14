#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 
    
    int s = 0; 
    int r = 0; 
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i]; 

    } 

    sort(arr, arr + n, greater<int>());

    int i = 0; 

    while (r <= s) {
        s -= arr[i];
        r += arr[i]; 
        i++; 
    }    

    cout << i; 
}