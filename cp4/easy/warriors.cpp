#include<bits/stdc++.h>

#define ull unsigned long long int

using namespace std;


int main(){
	int n;
	ull x, ans;
	
	scanf("%d", &n);
	while(n--){
		scanf("%llu", &x);
		ans = (-1+sqrt(1+8*x))/2;
		printf("%llu\n", ans);
	}
	
	return 0;
}
