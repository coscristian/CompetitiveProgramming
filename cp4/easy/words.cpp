#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	bool one = (s[0] != 'o' && s[1] == 'n' && s[2] == 'e') ||
				(s[1] != 'n' && s[0] == 'o' && s[2] == 'e') ||
				(s[2] != 'e' && s[0] == 'o' && s[1] == 'n') ||
				(s[0] == 'o' && s[1] == 'n' && s[2] == 'e');
	bool two = (s[0] != 't' && s[1] == 'w' && s[2] == 'o') ||
				(s[1] != 'w' && s[0] == 't' && s[2] == 'o') ||
				(s[2] != 'o' && s[0] == 't' && s[1] == 'w') ||
				(s[0] == 't' && s[1] == 'w' && s[2] == 'o');
	if(one) return 1;
	if(two)	return 2;
	return 3;
}

int main(){

	string s;
	int n; cin >> n;
	while(n--){
		cin >> s;
		cout << solve(s) << endl;
		

	}
	return 0;
}

