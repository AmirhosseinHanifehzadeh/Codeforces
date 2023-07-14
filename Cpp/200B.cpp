#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n; cin >> n; 

	float sum; 	

	for (int i = 1; i <= n; i++) {
		int p; cin >> p; 
		sum += (float)p; 
	} 

	cout << sum / n; 
}
