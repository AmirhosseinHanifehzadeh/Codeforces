#include <bits/stdc++.h>

using namespace std; 


int main() {
    int n, m; cin >> n >> m; 

    map<string, string> mp; 

    for (int i = 0; i < m; i++) {
        string t1, t2; cin >> t1 >> t2; 
        mp[t1] = t2; 
    }

    string result; 

    while (n--)
    {
        string w1; cin >> w1; 

        string w2 = mp[w1];

        if (w2.length() < w1.length()) result += w2;
        else result += w1;
        result += " "; 
    }
    

    cout << result.substr(0, result.length() - 1); 
}
