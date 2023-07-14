#include <bits/stdc++.h>

using namespace std;
 

int main() {
	string s; cin >> s; 
	int len = s.length(); 

	string p = ""; 
	bool v = false; 

	for (int i = 0; i < len; i++) {
		if (s[i] == 'h' && p == "") {
			p += 'h';
		} else if (s[i] == 'e' && p == "h") {
			p += 'e';
		} else if (s[i] == 'l' && (p == "he" || p == "hel")) {
			p += 'l';
		} else if (s[i] == 'o' && p == "hell") {
			v = true; 
			break;	
		}
	}

	v ? s = "YES" : s = "NO";
	cout << s; 
}
