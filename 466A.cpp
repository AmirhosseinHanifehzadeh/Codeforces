#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n, m, a, b; 
	cin >> n >> m >> a >> b; 

	int c = 0; 
	int r = n % m; 

	if (b <= m * a) c += (int)(n / m) * b; 
	else {
		c += n * a; 
		r = 0;
	} 

	if (r) {
		if (a * r < b) c += a * r; 
		else c += b; 
	}
	cout << c; 
}
