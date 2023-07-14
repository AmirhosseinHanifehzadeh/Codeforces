#include <bits/stdc++.h>

using namespace std; 

int main() {
    string s1, s2, s; 
    cin >> s1;
    cin >> s2; 
    cin >> s; 

    string s3 = s1 + s2; 

    sort(s3.begin(), s3.end());
    sort(s.begin(), s.end());

    if (s3 == s) cout << "YES";
    else cout << "NO"; 
}