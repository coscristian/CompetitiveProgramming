#include<bits/stdc++.h>

using namespace std;

int main(){

	char c; 
	string ans;
	bool opened = false;
	while(scanf("%c", &c) != EOF) {
		if(c == '"' && !opened){
			opened = true;
			ans += "``";
		}else if(c == '"' && opened) {
			opened = false;
			ans += "''";
		}else {
			ans += c;
		}
	}
	cout << ans;
	return 0;
}