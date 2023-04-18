#include<bits/stdc++.h>

using namespace std;

string solve(string x){
	if(x.size() <= 2 && (x[0] == '1' || x[0] == '4' || (x[0] == '7' && x[1] == '8'))) return "+";
	if(x[x.size()- 2] == '3' && x[x.size() - 1] == '5') return "-";
	if(x[0] == '9' && x[x.size()- 1] == '4') return "*";
	if(x[0] == '1' && x[1] == '9' && x[2] == '0') return "?";
	return "+";
}


int main(){

	int n;
	string x;
	cin >> n;
	while(n--){cin >> x; cout << solve(x) << endl;}
	return 0;
}