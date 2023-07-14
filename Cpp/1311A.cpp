#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>

using namespace std; 

int main(){
	int t; 
	cin >> t; 

	for (int i = 0; i < t; i++){
		int a, b; 
		cin >> a >> b; 

		int l = 0; 

		if (b > a) {
			if ((b - a) % 2) {
				l = 1; 
			}
			else
			{
				l = 2; 
			}
		}
		else if (b < a) {
			if ((a - b) % 2) {
				l = 2; 
			}
			else {
				l = 1;
			}
		}
		
	       	cout << l << endl; 	
	}
}
