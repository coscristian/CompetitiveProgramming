#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T, N = 0, K = 0, P = 0, i = 0;
	cin >> T;
	
	while(i++ < T){
		cin >> N >> K >> P;
		int ans = (K+P) % N;
		if (ans == 0) printf("Case %d: %d", i, N);
		else printf("Case %d: %d", i, ans);
		cout << endl;
	}
	
	return 0;
}
