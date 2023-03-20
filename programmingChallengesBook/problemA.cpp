#include<bits/stdc++.h>

using namespace std;

int main(){

	int i = 0, j = 0;
	while(scanf("%d %d", &i, &j) != EOF){
		int max_cycle = 0;
		for(int k = i; k < j; k++){
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
		cout << i << " " << j << " " << max_cycle << "\n";
	}
	return 0;
}

