#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, cont = 1; cin >> t;

	while(t--){
		cin >> n;
		int x = 0, y;
		while(n--){
			cin >> y;
			x = max(x, y);
		}
		printf("Case %d: %d\n", cont++, x);
	}

	return 0;
}