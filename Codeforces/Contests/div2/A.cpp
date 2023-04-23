#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	int ans = 1;
	if(s[0] == '0') return 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '?' && i == 0) ans *= 9;
		else if(s[i] == '?') ans *= 10;
	}
	return ans;
}

int main(){

	int t; cin >> t;
	string s; 
	while(t--){
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
