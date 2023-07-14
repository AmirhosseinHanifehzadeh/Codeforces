#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n , k ; 
	cin >> n >> k; 

	int a[n]; 

	for (int i = 0; i < n; i++) cin >> a[i]; 

	sort(a, a + n); 
	if (!k){ 
		int s = a[0] - 1 ? a[0] - 1 : -1; 
		cout << s; 
	}
	else {
		if (k &&  a[k] != a[k - 1]) cout << a[k - 1]; 
		else cout << -1;
	}	
}
