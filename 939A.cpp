#include <bits/stdc++.h>

using namespace std;
 

int main() {
	int n; 
	cin >> n; 
	int p[n+1]; 
	bool is_triangle = false; 

	for (int i = 0; i < n; i++) cin >> p[i + 1]; 
	
	for (int i = 1; i < n + 1; i++) {
		int sec = p[i]; 
		int third = p[sec];
		int root = p[third];  
		if (root == i) {
			cout << "YES";
			is_triangle = true; 
			break; 
		}	
	}

	if (!is_triangle) cout << "NO"; 
}
