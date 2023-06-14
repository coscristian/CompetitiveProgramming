#include<bits/stdc++.h>

using namespace std;

int main(){

	int t; 
	while(cin >> t){
		int cont = 0;
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if(a == t) cont++;
		if(b == t) cont++;
		if(c == t) cont++;
		if(d == t) cont++;
		if(e == t) cont++;
		cout << cont << endl;
	}

	return 0;
}