// Problem: https://open.kattis.com/problems/jobexpenses
#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, k, ans = 0; cin >> n;
	while(n--){
		cin >> k;
		if(k < 0) ans += k * (-1);
	}
	cout << ans << endl;

	return 0;
}