 #include <bits/stdc++.h>

using namespace std; 

int main(){
	int a[3]; 

	cin >> a[0] >> a[1] >> a[2]; 

	sort(a, a + 3); 

	int avg = (a[0] + a[1] + a[2]) / 3; 

	int value1 = a[2] - a[0];
	int value2 = abs(avg - a[0]) + abs(avg - a[1]) + abs(avg - a[2]);

	int m = min(a[2] - a[0], abs(avg - a[0]) + abs(avg - a[1]) + abs(avg - a[2])); 
	cout << m; 
}
