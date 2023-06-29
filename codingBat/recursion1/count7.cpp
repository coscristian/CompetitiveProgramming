/* https://codingbat.com/prob/p101409 */
#include<bits/stdc++.h>

using namespace std;

int solve(long long n){
	if(n == 0) return 0;
	if(n % 10 == 7) return 1 + solve(n / 10);
	return solve(n / 10);
}

int main(){

	long long n; cin >> n;
	cout << solve(n) << endl;

	return 0;
}