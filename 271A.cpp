#include <bits/stdc++.h>
#include <string> 

using namespace std; 


int main() {
	int n; 
	cin >> n;	
	
	for (int i = 0; i < n; i++){
		string s; 
		n++; 

		s = to_string(n); 

		if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]) {
			cout << s; 
			break; 
		}
	}
}
