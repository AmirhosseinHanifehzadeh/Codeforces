#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n, t; cin >> n >> t; 
	int a[n];  

	int s = 2147483647; 
	int st = 0; 
	int res = 0; 
	int idx = 0; 

	for (int i = 0; i < n; i++) cin >> a[i]; 

	for (int i = 0; i < n; i++) {
		while (st + a[idx] <= t && idx < n) {
			st += a[idx]; 
			idx++; 
		}

		res = max(res, idx - i);
		st -= a[i]; 
	}  

	cout << res; 
}	
