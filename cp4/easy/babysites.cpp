#include<bits/stdc++.h>

using namespace std;

string solve(){
	int n, cont = 1; cin >> n;
	string s;
	bool ans = true;
	while(n--) {
		cin >> s;
		if(s == "mumble" || stoi(s) == cont)
			cont++;
		else
			ans = false;
	}
	return ans ? "makes sense" : "something is fishy";
}

int main(){

	cout << solve() << endl;

	return 0;
}