#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, w, cont = 1; cin >> t;
	while(t--){
		int total_high = 0, total_short = 0, ant_height;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> w;
			if(i == 0){
				ant_height = w;
				continue;
			}
			if(w > ant_height){
				total_high++; ant_height = w;
			}
			else if(w < ant_height){
				total_short++; ant_height = w;
			}
		}
		printf("Case %d: %d %d\n", cont++, total_high, total_short);
	}


	return 0;
}