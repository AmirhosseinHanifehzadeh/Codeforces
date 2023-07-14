#include <bits/stdc++.h>
#include <map>

using namespace std; 

int main(){
	int t; 
	cin >> t; 

	for (int i = 0; i < t; i++) {
		map<char, int> f; 
		map<char, int> l; 
		int n; 
		string s;
		
		cin >> n; 
		cin >> s; 

		char prev = s[0]; 

		for(char i : s) {
			if (f.find(i) == f.end()) f[i] = 0;
			f[i]++; 
		}

		for (char i : s) {
			if (prev != i) {
				if (f[prev] != l[prev]) {
					value = false; 
					break;	
				}
			}
			
			if (l.find(i) == l.end()) l[i] = 0; 
			l[i]++;

			prev = i;
		}

		if (value) {
			cout << "YES" << endl; 
		}
		else{
			cout << "NO" << endl; 
		}
	}
}
