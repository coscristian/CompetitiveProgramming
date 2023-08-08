// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2019
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n; cin >> t;
	if(t != 0){
		t--;
		cin >> n;
	}
	int sig;
	while(t-- > 0){
		cin >> sig;
		if(n < sig) cout << n - sig << endl;
	}

	return 0;
}