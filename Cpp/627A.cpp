#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n; 
	cin >> n; 
	
	int l = 0; 

	while (n != 0){
		if (n >= 5) {
			n -= 5; 
			l++; 
		}

		else if (n >= 4) {
			n -= 4; 
			l++; 
		}

		else if (n >= 3) {
			n -= 3; 
			l++; 
		}

		else if (n >= 2) {
			n -= 2; 
			l++; 
		}

		else if (n >= 1) {
			n -= 1; 
			l++; 
		}
	} 

	cout << l; 

}
