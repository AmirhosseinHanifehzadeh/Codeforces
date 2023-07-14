#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 

    int a = n / 100; 
    n = n % 100; 

    int b = n / 20; 
    n = n % 20; 

    int c = n / 10; 
    n = n % 10; 

    int d = n / 5; 
    n = n % 5; 

    cout << a + b + c + d + n; 
}