#include<bits/stdc++.h>

#define LSOne(S) ((S) & -(S))

using namespace std;

int main(){
	int N = 3;
	for(int i = 0; i < (1 << N); ++i){
		int pos = i;
		while(pos){
			int ls = LSOne(pos);
			pos -= ls;
			printf("%d", __builtin_ctz(ls));
		}
		printf("\n");
	}
	return 0;
}
