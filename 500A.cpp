# include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, t; cin >> n >> t; 

    bool canVisit = false; 
    int s = 1; 
    int arr[n];
    arr[0] = 0; 

    for (int i = 1; i < n; i++) cin >> arr[i]; 

    while(s < t) {
        s += arr[s]; 
        if (s == t){
            canVisit = true;
            break; 
        } 
    }   

    string res = canVisit ? "YES" : "NO"; 
    cout << res; 
}
