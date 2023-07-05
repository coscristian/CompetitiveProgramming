// https://codingbat.com/prob/p184029
#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	size_t pos = s.find("hi");
	if(pos == string::npos) return 0;
	s.erase(pos, 2);
	return 1 + solve(s);
}

int main(){
	string s; cin >> s;
	cout << solve(s) << endl;
	return 0;
}