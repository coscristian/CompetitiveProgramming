#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5;

ll memo[N];

ll f(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(memo[n] != -1)
		return memo[n];
	else
		return memo[n] = f(n-1) + f(n-2); 
}

int main(){
	memset(memo, -1, sizeof memo);
	cout << f(100) << endl;
	return 0;
}