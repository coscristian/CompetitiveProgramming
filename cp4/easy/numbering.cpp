#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, r, cont = 1;
	while(cin >> r >> n && r != 0 && n != 0){
		cout << "Case " << cont++ << ": ";
		--r;
		if(r/n > 26) cout << "impossible" << endl;
		else cout << r/n << endl;
	}

	return 0;
}