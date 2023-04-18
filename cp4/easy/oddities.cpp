#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	while(n--){
		cin >> x;
		string ans = "odd";
		if(x%2 == 0) ans = "even";
		cout << x << " is " << ans << endl;
	}
	return 0;
}