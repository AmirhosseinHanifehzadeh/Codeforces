#include <bits/stdc++.h>

using namespace std; 

int main() {
    long long n, m, curr, time;
    cin >> n >> m; 
    
    curr = 1; 
    time = 0; 

    while (m--) {
        long long a; cin >> a;
        if (curr < a) 
            time += a - curr; 
        else if (curr > a) 
            time += n - curr + a; 
        curr = a; 
    }

    cout << time; 
}