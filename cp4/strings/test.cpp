#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream myfile; myfile.open("data.txt");
	string sentences, temp;

	while(myfile.good()){
		myfile >> temp;
		if(temp == "\n")
			sentences += " ";
		else
			sentences += temp;
	}

	cout << sentences;

	return 0;
}