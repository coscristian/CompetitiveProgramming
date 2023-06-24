#include<bits/stdc++.h>

using namespace std;

int main(){

	string n1, n2; 
	while(cin >> n1 >> n2){
		int value = 0;
		for(int i = 0; i < n1.size(); i++){
			int ascii = n1[i];
			if( ascii >= 65 && ascii <= 90)
				value += abs(90-ascii-26);
			else if(ascii >= 97 && ascii <= 122)
				value += abs(122-ascii-26);
		}
	}
	return 0;
}