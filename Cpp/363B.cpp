#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n, k; 
	cin >> n >> k; 

	int p[n]; 

	int a = 0; 
	int temp = 0; 
	int result = 1; 

	for (int i = 0; i < n; i++) cin >> p[i]; 

	int first = 0; 

	for (int i = 0; i < k; i++) temp += p[i]; 

	a = temp; 

	for (int i = k; i < n; i++) {
		temp -= p[first]; 
		temp += p[i]; 
		first++; 
		if (temp < a) {
			a = temp; 
			result = first + 1; 
		}
	}

	

	cout << result; 
}
