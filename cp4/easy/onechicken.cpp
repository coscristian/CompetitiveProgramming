#include<bits/stdc++.h>

using namespace std;

int main(){

	int N, M, P;
	char plural = '\0';
	cin >> N >> M;
	P = M - N;
	if(abs(P) != 1) plural = 's';
	if(P < 0) cout << "Dr. Chaz needs " << -P << " more piece" << plural << " of chicken!\n";
	else cout << "Dr. Chaz will have " << P << " piece" << plural << " of chicken left over!\n";
	return 0;
}