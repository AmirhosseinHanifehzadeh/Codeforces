#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n;
    int a[n];

    vector<int> zeros; 
    int zeroCnt = 0;
    int oneCnt = 0; 
    int t, s, f, r;
    s = 0; 
    f = 0;   

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!a[i]) zeros.push_back(i); 
        else oneCnt++; 
    } 

    int x = zeros.size();  
    int y = sizeof(a) / sizeof(a[0]);

    if (y != 1 && x != 1 && oneCnt != n) {
        for (int i = 0; i < zeros.size() - 1; i++) {
        for (int j = i; j < zeros.size(); j++) {
            t = 1; 
            for (int z = zeros[i]; z < zeros[j]; z++) {
                if (!a[z]) t++; 
            }
    
            if (t > zeroCnt) {
                s = zeros[i];
                f = zeros[j]; 
                zeroCnt = t; 
            }
        }
    }

    cout << oneCnt + zeroCnt - (f - s + 1 - zeroCnt);
    }

    else if (y == 1){
        if (a[0]) cout << 0; 
        else cout << 1; 
    }
    else if (x == 1) 
        cout << oneCnt;
    else if (oneCnt == n) {
        oneCnt--; 
        cout << oneCnt; 

    }
}