#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, d; 
    string g; 

    cin >> n; 
    cin >> g; 

    d = 0; 
    int all = g.length();

    for (int i = 0; i < all; i++) {
        if (g[i] == 'D')
            d++; 
    }

    int a = all - d; 

    string output = a > d ? "Anton" : (a < d ? "Danik" : "Friendship"); 
    cout << output; 
}