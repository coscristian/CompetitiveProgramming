#include<bits/stdc++.h>

using namespace std;

string solve(int x, int y){
	if(x+y == 13) return "Never speak again";
	if(x == y) return "Undecided";
	if(x > y) return "To the convention";
	return "Left beehind";
	
}

int main(){
	int x, y;
	while(cin >> x >> y){
		if(x == 0 && y == 0)break;
		cout << solve(x, y) << "." << endl;
	}
	return 0;
}