#include <bits/stdc++.h>

using namespace std;

int main() {
	string word1, word2, output; 
	cin >> word1 >> word2;

	output = ""; 

	int n = min(word1.length(), word2.length()); 

	for (int i = 0; i < n; i++) {
		output += word1[i];  
		output += word2[i]; 
	}

	output += word1.substr(n);
	output += word2.substr(n); 

	cout << output; 
}


