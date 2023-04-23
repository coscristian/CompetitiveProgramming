#include<bits/stdc++.h>

using namespace std;

int main(){
	int a = 0,b = 0;
	while(cin >> a >> b && a != -1 & b != -1){
		int ans, first_op = abs(a-b), second_op;
		if(a > b){second_op = 100 - a + b;}
		else {second_op = 100 -b + a;}
		if(first_op < second_op) ans = first_op;
		else ans = second_op;
		cout << ans << endl;
	}
	return 0;
}
