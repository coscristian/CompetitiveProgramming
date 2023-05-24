#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x, range, cont = 1;

	while(cin >> n){
		int greatest = -10000001, lower = 10000000;
		for(int i=1; i<= n; i++){
			cin >> x;
			greatest = max(greatest, x);
			lower = min(lower, x);
		}
		printf("Case %d: %d %d %d\n", cont++, lower, greatest, greatest - lower);
	}

	return 0;
}