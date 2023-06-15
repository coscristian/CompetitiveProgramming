/*
Problem: https://open.kattis.com/problems/cold
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, t, cont = 0; cin >> n;
	while(n--){
		cin >> t;
		if(t < 0) cont++;
	}
	cout << cont << endl;
	return 0;
}