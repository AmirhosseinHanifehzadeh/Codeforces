#include <bits/stdc++.h>

using namespace std; 


int main() {
    int n; cin >> n; 
    int sum_x,sum_y,sum_z; 
    sum_x = sum_y = sum_z = 0; 

    while (n--)
    {
        int x,y,z; cin >> x >> y >> z;
        sum_x += x;
        sum_y += y; 
        sum_z += z; 
    }

    string output = sum_x || sum_y || sum_z ? "NO" : "YES"; 
    cout << output; 
}