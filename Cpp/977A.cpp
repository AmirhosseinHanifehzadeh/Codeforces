#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n, k; 

	cin >> n >> k; 

	while (k) {
		int i = n % 10; 

		bool value = !i; 
		bool value1 = i <= k; 
		if (i && i <= k) {
			n -= i; 
			k -= i;  		
		}
		else if (k < i && i) {
			n -= k; 
			k = 0; 
		} 
		else {
			k--; 
			n /= 10; 	
		}
	}	

	cout << n; 
}

