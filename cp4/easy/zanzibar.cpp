// Problem: https://open.kattis.com/problems/zanzibar
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int act, prev, total = 0;
		cin >> prev >> act;
		while(act != 0){
			if(act > 2*prev) total += act-2*prev;
			prev = act;
			cin >> act;
		}
		cout << total << endl;
	}
	return 0;
}