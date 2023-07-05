// https://codingbat.com/prob/p158888
#include<bits/stdc++.h>

using namespace std;

int solve(long long base, long long n){
	if(n == 0) return 1;
	return base * solve(base, n - 1);
}

int main(){
	long long base, n; cin >> base >> n;
	cout << solve(base, n) << endl;
	return 0;
}