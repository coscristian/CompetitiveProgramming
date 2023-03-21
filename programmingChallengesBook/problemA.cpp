#include<bits/stdc++.h>

using namespace std;

int main(){

	int i = 0, j = 0;
	while(scanf("%d %d", &i, &j) != EOF){
		bool flag = false;
		if (i > j){
			swap(i, j);
			flag = true;	
		}
		int max_cycle = 1;
		for(int k = i; k <= j; k++){
			int cycle = 1;
			long long int n = k;
			while(n != 1){
                        	if(n % 2 == 0) n /= 2;
	                        else n = 3*n + 1;
        	                cycle++;
                	}
			if(cycle > max_cycle){
				max_cycle = cycle;
			}
		}
		if(flag) cout << j << " " << i << " " << max_cycle << "\n";
		else cout << i << " " << j << " " << max_cycle << "\n";
	}
	return 0;
}

