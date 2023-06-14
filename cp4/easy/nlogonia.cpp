#include<bits/stdc++.h>

using namespace std;

int main(){

	while(true){
		int k, n, m, x, y; cin >> k;
		if(k == 0) break;
		cin >> n >> m;
		while(k--) {
			cin >> x >> y;
			if(x == n || y == m) cout << "divisa\n";
			else if(x > n && y > m) cout << "NE\n";
			else if(x > n && y < m) cout << "SE\n";
			else if(x < n && y < m) cout << "SO\n";
			else cout << "NO\n";
		}	
	}
	return 0;
}