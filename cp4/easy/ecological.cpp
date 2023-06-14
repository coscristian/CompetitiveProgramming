#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	while(n--){
		int f, ans = 0; cin >> f;
		while(f--){
			int a, b, c; cin >> a >> b >> c;
			ans += a*c;
		}
		cout << ans << endl;
	}
	return 0;
}