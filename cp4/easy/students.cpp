#include<bits/stdc++.h>

using namespace std;

int main(){
	string name, began, birth, courses;
	while(cin >> name >> began >> birth >> courses){
		string ans = "eligible";
		cout << began[0];
		string year = began[0] + began[1] + began[2] + began[3];
		//int began_year = stoi(year);
		//cout << began_year << endl;
		cout << year << endl;
		//cout << name << " " << began << " " << birth << " " << courses << endl;	
	}
	//cin >> name >> began >> birth >> courses;



	

	return 0;
}