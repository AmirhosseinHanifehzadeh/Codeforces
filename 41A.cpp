#include <bits/stdc++.h>


using namespace std; 

int main() {
    string s1, s2; 
    cin >> s1; 
    cin >> s2; 

    int len = s1.length(); 
    int j = len - 1; 
    int isCorrect = true; 

    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[j]) {
            isCorrect = false; 
            break; 
        }

        j--; 
    }

    string output = isCorrect ? "YES" : "NO"; 
    cout << output; 
}