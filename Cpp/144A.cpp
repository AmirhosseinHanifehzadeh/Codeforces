#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n; cin >> n; 

	int inps[n + 1];

	inps[0] = 0; 

	for(int i = 1; i <= n; i++) cin >> inps[i]; 	

	int s = inps[1];
	int b = inps[1]; 

	int idx_s = 1; 
	int idx_b = 1; 

	for (int i = 2; i <= n; i++) {
		if (inps[i] <= s) {
			s = inps[i]; 
			idx_s = i;
		} 

		else if (inps[i] > b) {
			b = inps[i]; 
			idx_b = i; 
		}
	}

	int result = (idx_b - 1) + (n - idx_s);

	if (idx_b > idx_s) result--; 
			 
	cout << result; 
}
