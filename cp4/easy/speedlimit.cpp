// Problem: https://open.kattis.com/problems/speedlimit
#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	while(scanf("%d", &n) && n != -1) {
		int s, t, dist = 0, first = 1, ant_time;

		while(n--) {
			cin >> s >> t;
			if(first){
				dist += s*t;
				first = 0;
			}else dist += s*(t-ant_time);
			ant_time = t;
		}
		cout << dist << " miles\n";
	}
	return 0;
}