#include<bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	int K = 0, sum = 0;
	while(t--){
		string op; cin >> op;
		if(op[0] == 'd'){
			cin >> K;
			sum+=K;
		}else cout << sum << endl;
	}

	return 0;
}