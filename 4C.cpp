#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n; cin >> n;

	map<string, int> mp; 	

	while(n--){
		string s; cin >> s;
		string result; 	
		if (mp.find(s) != mp.end()) {
			result = s + to_string(mp[s]); 
			mp[s]++; 
		}
		else {
			result = "OK";
			mp[s] = 1; 
		} 

		cout << result << endl; 
	}
}
