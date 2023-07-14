#include <bits/stdc++.h>
#include <map> 

using namespace std;  

int main(){
	string s; 
	cin >> s; 

	map<char, int> cnt;

	int r = 0; 	

	for (char i : s){
		if (cnt.find(i) == cnt.end()) cnt[i] = 0;

		if (!cnt[i]){
		       	r++; 
			cnt[i]++;
		}	
		
	}

	if (r % 2) cout << "IGNORE HIM!"; 
	else cout << "CHAT WITH HER!";
}
