// Problem = https://open.kattis.com/problems/earlywinter 
#include<bits/stdc++.h>

using namespace std;

string solve(){
	int n, dm, d_past, years = 0; cin >> n >> dm;
	string ans = "It had never snowed this early!";
	
	while(n-- && scanf("%d", &d_past) && d_past > dm){
		years++;
	}

	if(d_past <= dm) return "It hadn't snowed this early in " + to_string(years) + " years!";

	return "It had never snowed this early!";
}

int main(){
	cout << solve() << endl;
	return 0;
}