#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, a, b;
	cin >> t;

	while(t--){
		cin >> a >> b;
		string ans = ">";
		if(a < b) ans = "<";
		if(a == b) ans = "=";
		cout << ans << endl;
	}
	return 0;
}