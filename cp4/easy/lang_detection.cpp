#include<bits/stdc++.h>

using namespace std;

int main(){
	string x; int cont = 1;
	while(cin >> x && x != "#"){
		string ans = "UNKNOWN";
		if(x == "HELLO") ans = "ENGLISH";
		else if(x == "HOLA") ans = "SPANISH";
		else if(x == "HALLO") ans = "GERMAN";
		else if(x == "BONJOUR") ans = "FRENCH";
		else if(x == "CIAO") ans = "ITALIAN";
		else if(x == "ZDRAVSTVUJTE") ans = "RUSSIAN";
		cout << "Case " << cont++ << ": " << ans << endl;
	}
	return 0;
}