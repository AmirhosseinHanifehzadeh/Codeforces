#include <bits/stdc++.h>

using namespace std; 

int main() {
    long long n; cin >> n; 

    long long i = 0; 
    long long output = 0;

    while (n && n >= 10) {
        long long lastDigit = n % 10; 
        n /= 10; 
        lastDigit = min(lastDigit, 9 - lastDigit);
        output += lastDigit * (long long)pow(10, i); 
        i++; 
    }

    if (n == 9) output += n * (long long)pow(10, i); 
    else output += min(n, 9 - n) * (long long)pow(10, i); 
    cout << output << endl;
}