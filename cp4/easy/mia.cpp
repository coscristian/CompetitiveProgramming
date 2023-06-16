// Problem: https://open.kattis.com/problems/mia
#include<bits/stdc++.h>

using namespace std;

const string PLAYER_1_WINS = "Player 1 wins.";
const string PLAYER_2_WINS = "Player 2 wins.";
const string TIE = "Tie.";

int doubles(int d1, int d2){
	if(d1 == d2) return 2;
	return 0;
}

int highest(int d1, int d2){
	if((d1 == 1 && d2 == 2) || (d1 == 2 && d2 == 1))
		return 3;
	return 0;
}

string untie_doubles(int s0, int s1, int r0, int r1){
	if(s0 > r0) return PLAYER_1_WINS;
	if(r0 > s0) return PLAYER_2_WINS;
	return TIE;
}

string untie_remaining(int s0, int s1, int r0, int r1){
	string p1 = to_string(max(s0, s1)) + to_string(min(s0, s1));
	string p2 = to_string(max(r0, r1)) + to_string(min(r0, r1));

	if(stoi(p1) > stoi(p2)) return PLAYER_1_WINS;
	if(stoi(p2) > stoi(p1)) return PLAYER_2_WINS;
	return TIE;
}

string solve(int s0, int s1, int r0, int r1){
	int p1_priority = max(highest(s0,s1), doubles(s0, s1));
	int p2_priority = max(highest(r0,r1), doubles(r0, r1));

	if(p1_priority == 0) p1_priority = 1;
	if(p2_priority == 0) p2_priority = 1;

	if(p1_priority > p2_priority) return PLAYER_1_WINS;
	if(p2_priority > p1_priority) return PLAYER_2_WINS;

	// BOTH PLAYERS HAVE SAME PRIORITY
	switch(p1_priority){
		case 2: 
			return untie_doubles(s0, s1, r0, r1);
		case 1:
			return untie_remaining(s0, s1, r0, r1);
		default:
			return TIE;
	}
}

int main(){
	int s0, s1, r0, r1;
	while(true){
		cin >> s0 >> s1 >> r0 >> r1;
		if(s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) break;
		cout << solve(s0, s1, r0, r1) << endl;
	}	

	return 0;
}