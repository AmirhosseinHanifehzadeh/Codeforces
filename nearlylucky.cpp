#include<bits/stdc++.h>
#include<string>

using namespace std; 

int main() {
	string s; 
	cin >> s; 

	int cnt = 0;
       	bool isNearlyLucky = true; 	


	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '7' || s[i] == '4') cnt++;  
	}

	for (char i : to_string(cnt)) {
		if (i != '7' && i != '4'){
			isNearlyLucky = false; 			
		}
	}

	if (isNearlyLucky) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
