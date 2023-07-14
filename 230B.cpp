#include <bits/stdc++.h>

using namespace std; 

vector<bool> findPrimeNumber() {
	long long sqrt_limit = 1000001; 
	vector<bool> a(sqrt_limit, false); 

	for (long long i = 2; i < sqrt_limit; i++) {
		bool isPrime = true; 
		for (long long j = 2; j <= i / 2; i++) {
			if (i % j == 0) isPrime = false; break; 
		}

		if (isPrime) a[i] = true; 
	}

	return a; 
}

int main() {
	vector<bool> primeLi = findPrimeNumber(); 
	int l = primeLi.size(); 
	int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		long long x; cin >> x; 
		float a = sqrt(x); 
		long long b = a; 

		if (a == b && x > 1) {
			if (primeLi[b]) cout << "YES" << endl; 
			else cout << "NO" << endl; 
		} 
		else cout << "NO" << endl; 
	} 
}
