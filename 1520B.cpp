#include <bits/stdc++.h>

using namespace std; 

int main() {
	int t; 
	cin >> t; 

	for (int i = 0; i < t; i++){
		int a; 
		cin >> a;
		
		int l = 0; 

		double b = log10(a);
		int c = log10(a); 
		if (a == 1) l = 1;
		else if (b == c) l = c * 9; 
		else {
			int r, co; 
			int j = 1; 	
			r = 0; 
			l = c * 9; 

			while (c != -1) {
				r += (int)pow(10,c); 
				c--; 
			}	
			

			if (r <= a) {  
				while (j * r <= a) {
					j++;
					l++; 
				}
			}

		}

		cout << l << endl; 
	}
}
