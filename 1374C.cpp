#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; cin >> t; 
    while (t--) {
        stack<char> st; 
        int n; cin >> n; 
        string s; cin >> s; 

        for (char i : s) { 
            if (i == ')' && !st.empty() && st.top() == '(') st.pop(); 
            else st.push(i); 
        }

        cout << st.size() / 2 << endl; 
    }
}
