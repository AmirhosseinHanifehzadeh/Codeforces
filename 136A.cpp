#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n; cin >> n; 
 
	int res[n + 1]; 

	for (int i = 1; i < n + 1; i++) {
		int p; cin >> p; 
		res[p] = i; 		
	}

	for (int i = 1; i < n + 1; i++) 
		cout << res[i] << " "; 
}
