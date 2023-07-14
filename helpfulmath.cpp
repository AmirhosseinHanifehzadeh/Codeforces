#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	string s;
	vector < string > nums;
	string result = "";
	cin >> s;

	for (int i = 0; i < s.length(); i += 2) {
		nums.push_back(string(1, s[i]));
	}

	sort(nums.begin(), nums.end());
		
	for (int i = 0; i < nums.size(); i++) {
		result += nums[i] + "+";
	}

	result.erase(result.length() - 1, 1);

	cout << result << endl;
}
