#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n; cin >> n; 

	float res; 	

	for (int i = 1; i <= n; i++) {
		int a; cin >> a; 
		res += (float)(a / 100); 
	} 

	cout << res / n; 
}
