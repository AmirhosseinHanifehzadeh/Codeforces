#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 

    int a = 0; 
    int b = 0;
    int c = 0;
    int d = 0; 
    int r = 0; 

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;

        if (temp == 4) d++; 
        if (temp == 3) c++;
        if (temp == 2) b++; 
        if (temp == 1) a++;  
    }

    int ac = min(a, c); 
    r += ac; 
    a -= ac;
    c -= ac; 

    r += b / 2; 
    b = b % 2; 
    
    if (a >= b * 2) {
        a -= b * 2;
        r += b; 
        b = 0; 
    }

    r += a / 4; 
    a = a % 4;

    if (a + b * 2 + c * 3 < 4 && (a || b || c)) {
        a = 0; 
        b = 0;
        c = 0;  
        r++;
    } 

    r += a + b + c + d; 

    cout << r; 
}