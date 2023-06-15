#include<bits/stdc++.h>

using namespace std;

int main(){

	int s; cin >> s;

	for(int i = 1; i <= s; i++){
		int p1, p2, p3, p4, p5, p6,
			p7, p8, p9, p10, p11, p12,
			p13;
		cin >> p1 >> p2 >> p3 >> p4 >>
			p5 >> p6 >> p7 >> p8 >> p9 >>
			p10 >> p11 >> p12 >> p13;
		bool ans = p1 && p2 && p3 && p4 && p5 && p6 && p7 &&
				   p8 && p9 && p10 && p11 && p12 && p13;
		string str_ans = "No";
		if(ans) str_ans = "Yes";
		cout << "Set #" << i << ": " << str_ans << endl;
	}


	return 0;
}