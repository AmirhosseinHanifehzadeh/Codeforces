#include <iostream>
#include <vector>
#include <string> 

using namespace std;




int main(){
	int N{};
	int ans = 0;
	// get N 
	cin >> N;
	// initialize an array 
	vector < string > solutions(N + 1);

	for (int i = 0; i < N + 1; i++) {
		getline(cin, solutions[i]);
	}

	for (int i = 1; i < solutions.size(); i++) {
		int counter = 0;
		if ( solutions[i][0] == '1'){
			counter += 1;
		}
		if (solutions[i][2] == '1') {
			counter += 1;
		}
		if (solutions[i][4] == '1') {
			counter += 1;	
		}

		if (counter >= 2){
			ans += 1;		
		}

	}

	cout << ans << endl;

	return 0;

}
