#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n, k; 
    string q; 

    cin >> n >> k; 
    cin >> q; 

    vector<int> b; 

    for (int i = 0; i < n; i++) {
        if (q[i] == 'B')
            b.push_back(i);
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < b.size(); j++) {
            if (b[j] + 1 != b[j + 1] && b[j] < n - 1)
                b[j]++; 
        }
    }

    string output = "";
    for (int i = 0; i < n; i++) 
        output += 'G'; 

    for (int i = 0; i < b.size(); i++)
        output[b[i]] = 'B'; 

    cout << output; 
}
