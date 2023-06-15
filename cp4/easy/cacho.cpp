#include<bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	while(t--){
		int d1, d2, d3, d4, d5;
		cin >> d1 >> d2 >> d3 >> d4 >> d5;
		bool ord_scale = d1 == d2-1 && d2 == d3-1 && d3 == d4-1 && d4 == d5-1;
		if(ord_scale)
			cout << "Y\n";
		else
			cout << "N\n";
	}

	return 0;
}