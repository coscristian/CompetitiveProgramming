#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, x; cin >> t;

	while(t--){
		cin >> n;
		vector<int> a(n);
		vector<int> a1(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> a1[i];
		int diff_left = -1, diff_right = -1;
		for(int i = 0; i < n; i++){
			if(a[i] != a1[i]){
				diff_right = i;
				if(diff_left == -1)
					diff_left = i;
			}
		}
		while(diff_left > 0 && a1[diff_left - 1] <= a1[diff_left])
			diff_left--;
		while(diff_right < n - 1 && a1[diff_right + 1] >= a1[diff_right])
			diff_right++;
		cout << diff_left+1 << " " << diff_right+1 << endl;
	}
	return 0;
}