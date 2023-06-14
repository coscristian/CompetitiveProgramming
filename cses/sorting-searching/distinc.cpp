#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	set<long long int> my_set;
	while(n--){
		long long int x; cin >> x;
		my_set.insert(x);
	}
	cout << my_set.size() << endl;
	return 0;
}
