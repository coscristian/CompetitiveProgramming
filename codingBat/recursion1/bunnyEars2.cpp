/*https://codingbat.com/prob/p107330*/
#include<bits/stdc++.h>

using namespace std;

int solve(int n){
	if(n == 0) return 0;
	if(n % 2 == 0)
		return 3 + solve(n-1);
	return 2 + solve(n-1);
}

int main(){

	int n; cin >> n;
	cout << solve(n) << endl;

	return 0;
}
