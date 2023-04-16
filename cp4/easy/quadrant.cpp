#include<bits/stdc++.h>

using namespace std;

int solve(int x, int y){
	if(x > 0 && y > 0) return 1;
	if(x < 0 && y > 0) return 2;
	if(x < 0 && y < 0) return 3;
	else return 4;
}

int main(){
	int x, y;

	cin >> x >> y;
	cout << solve(x, y) << endl;

	return 0;
}