#include<bits/stdc++.h>

using namespace std;

int main(){

	long long t, p, r, f; cin >> t;

	while(t--){
		cin >> p >> r >> f;
		int cont = 0;
		for(;;){
			if(p >= f) break;
			p *= r;
			cont++;
		}
		if(p == f) cont++;
		cout << cont << endl;
	}
	return 0;
}