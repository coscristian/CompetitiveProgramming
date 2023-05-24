#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,min_junk = INT_MAX, space_junk, day, aux_n; cin >> n;
	aux_n = n;

	for(int i = 0; i < n; i++){
		cin >> space_junk;
		if(space_junk < min_junk){
			min_junk = space_junk;
			day = i;	
		} 
	}
	cout << day << endl;

	return 0;
}