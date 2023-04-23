#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, a, b, c, cont = 1;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		cout << "Case " << cont++ << ": " << (a+b+c)-max(max(a,b),c)-min(min(a,b),c) << endl;
	}

	return 0;
}