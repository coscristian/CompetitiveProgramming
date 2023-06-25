#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k, int conse_cero, int conse_one, int taken, int ant){
	
	if(n == 0) return 1;

	if(taken == 0 && ant == 1) conse_cero = 0;
	else if(taken == 1 && ant == 0) conse_one = 0;
	
	if(taken == 0) conse_cero++;
	else if(taken == 1) conse_one++;
	if(conse_cero > k || conse_one > k) return 0;

	return solve(n-1, k, conse_cero, conse_one, 0, taken) + solve(n-1, k, conse_cero, conse_one, 1, taken);
}

int main(){
	int n, k; cin >> n >> k;
	cout << solve(n, k, 0, 0, 0, 0) << endl;
	return 0;
}