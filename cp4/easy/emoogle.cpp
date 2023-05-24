#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x, cont_cases = 0;
	while(cin >> n && n != 0){
		int cont_given = 0, cont_reasons = 0;
		while(n--){
			cin >> x; 
			if(x == 0) cont_given++;
			else cont_reasons++;
		}
		cout << "Case " << ++cont_cases << ": " << (cont_reasons-cont_given) << endl;
	}
	return 0;
}