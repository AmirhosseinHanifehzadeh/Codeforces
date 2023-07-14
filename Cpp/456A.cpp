#include <bits/stdc++.h>

using namespace std; 


int main() {
    int n; cin >> n; 

    pair<int, int> l[n];

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b; 

        l[i].first = a; 
        l[i].second = b;   
    }

    sort(l, l + n); 

    pair<int, int> l1[n]; 

    copy(l, l + n, l1);

    sort(l, l + n, [](auto &left, auto &right) {
    return left.second < right.second;
    });

    bool is_correct = true; 
    for (int i = 0; i < n; i++) {
        if (l[i] != l1[i]) {
            is_correct = false; 
        }
    } 

    if (is_correct) cout << "Poor Alex";
    else cout << "Happy Alex"; 
}