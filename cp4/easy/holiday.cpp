#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, l, w, h, case_num = 1;
	cin >> t;
	while(t--){
		cin >> l >> w >> h;
		string ans = "good";
		if(l > 20 || w > 20 || h > 20) ans = "bad";
		cout << "Case " << case_num++ << ": " << ans << endl;
	}
	return 0;
}