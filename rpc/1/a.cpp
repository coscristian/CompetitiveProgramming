#include<bits/stdc++.h>

using namespace std;

int main(){
	string n; cin >> n;
	sort(n.begin(), n.end());
	for(int i = n.size()-1; i >= 0; i--)
		cout << n[i];
	cout << endl;
	return 0;
}