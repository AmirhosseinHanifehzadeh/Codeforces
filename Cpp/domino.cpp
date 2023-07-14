#include <iostream>
#include <string>
#include <vector> 



using namespace std;


vector < string > split(string s,const char* d = " ") {
	vector < string > lets;
	int starter = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' '){
			lets.push_back(s.substr(starter, i));
			starter = i + 1;
		}		
	
	}

	return lets;
}


int main(){
	string s; 
	cin >> s;
	vector < string > alist =  split(s, "-");
	for (int i = 0; i < alist.size(); i++) {
		cout << i << alist[i] << endl;
	}
}
