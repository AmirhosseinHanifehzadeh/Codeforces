#include <bits/stdc++.h>

using namespace std; 

int main() {
	long long n; cin >> n;
	long long f1, f2; 	

	if (n % 2) {
		f1 = n - 1; 
		f2 = n; 	
	}	
	else {
		f1 = n; 
		f2 = n - 1; 
	}

	f1 -= 2; 
	f1 /= 2;
	f1++; 

	f2--; 
	f2 /= 2; 
	f2++;

	long long output = (f1 * (f1 + 1)) - (f2 * f2); 
	cout << output; 
}
