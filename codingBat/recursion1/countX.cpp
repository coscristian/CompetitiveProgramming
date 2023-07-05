// https://codingbat.com/prob/p170371
#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	if(s.size() == 0) return 0;
	int cont = 0;
	if(s[s.size() - 1] == 'x') cont++;
	s.erase(s.size()-1, 1);
	return cont + solve(s);	
}

int main(){
	string s; cin >> s;
	cout << solve(s) << endl;
	return 0;
}