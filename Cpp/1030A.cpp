#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n; 
	cin >> n; 

	bool isHard = false; 

	for (int i = 0; i < n; i++){
		int a; 
		cin >> a; 

		if (a) {
			isHard = true; 
			break; 
		} 
	}
	
	if (isHard) cout << "HARD";
	else cout << "EASY";
}
