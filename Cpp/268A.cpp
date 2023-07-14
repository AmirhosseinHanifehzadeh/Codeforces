#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n;

    pair<int, int> c[n];  
    int res = 0; 

    for (int i = 0; i < n; i++) {
        pair<int, int> t; 
        int h, a; cin >> h >> a; 
        t.first = h; 
        t.second = a; 
        c[i] = t;  
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i].first == c[j].second) ++res; 
        }
    }

    cout << res; 
}