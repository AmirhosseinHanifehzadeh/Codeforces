#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n; 
	cin >> n; 
	
	while (n--) {
		int a, b; 
		cin >> a >> b; 

		int r = 0;
	       	int c = abs(b - a); 	

		if (c % 10) r++;
		r += c / 10; 

		cout << r << endl; 
	}
}
