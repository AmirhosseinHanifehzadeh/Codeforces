#include <bits/stdc++.h>

using namespace std; 

void print(int a, int b, int c, int d) {
    cout << a << " " << b << " " << c << " " << d; 
}

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2; 

    if (x1 == x2) {
        int l = abs(y2 - y1); 
        print(x1 + l, y1, x2 + l ,y2);
    }
    else if (y1 == y2) {
        int l = abs(x1 - x2);
        print(x1, y1 + l, x2, y2 + l);  
    }
    else if (abs(x1 - x2) != abs(y1 - y2)) {
        cout << -1; 
    }
    else {
        int l = abs(x1 - x2);
        if (x1 > x2) print(x1 - l, y1, x2 + l, y2);  
        else print(x1 + l, y1, x2 - l, y2); 
    }
}