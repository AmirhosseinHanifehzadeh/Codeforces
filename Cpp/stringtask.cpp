#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm> 


using namespace std;


int main(){
	string s;
	string r;

	cin >> s;

	for (char w: s) {
		bool isLowercaseVowel = (w == 'a' || w == 'e' || w == 'i' || w == 'u' || w == 'o' || w == 'y');
		bool isUppercaseVowel  = (w == 'A' || w == 'E' || w == 'I' || w == 'U' || w == 'O' || w == 'Y');

		if (!isLowercaseVowel && !isUppercaseVowel){
			if (isupper(w)) {
				int a = (int)w;
				char rl = char(a + 32);
				r += '.';
				r += rl;
			}else{
				char rl = (char) w; 
				r += '.';
				r +=  rl;
			}
		}
		

	}
	cout << r << endl;
}
