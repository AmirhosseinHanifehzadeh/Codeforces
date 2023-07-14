#include <bits/stdc++.h>

using namespace std; 

int main() {
	int t; cin >> t; 
	while (t--) {
		long long x, y; cin >> x >> y; 
		long long a, b; cin >> a >> b; 

		long long m = min(x, y); 
		cout << abs(x - y) * a +  min(m * b, 2 * m * a) << endl; 
	}
}
