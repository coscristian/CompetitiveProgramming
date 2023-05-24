#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<long long int> memo(n+1, 0);
	memo[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 6; j++){
			if(i-j >= 0)
				memo[i] = (memo[i] + memo[i-j]) % (1000000000 + 7);
		}
	}
	cout << memo[n] << endl;

	return 0;
}