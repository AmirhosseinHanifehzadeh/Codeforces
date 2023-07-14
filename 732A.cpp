#include <bits/stdc++.h>

using namespace std; 

int main() {
    int k, r; cin >> k >> r; 

    int i = 1;
    int a = k % 10; 

    while(true) {
        if ((a * i) % 10 == r || (a * i) % 10 == 0) break; 
        i++; 
    }

    cout << i; 
}
