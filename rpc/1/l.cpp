#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin >> n; long double sum = 0, x;
	
	while(n--){
		cin >> x;
		sum += x*x*x;	
	}
	printf("%.10Lf\n", pow(sum, 1.0/3.0));
	
	return 0;
}