// 10646 - https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1587
#include<bits/stdc++.h>

using namespace std;

pair<char, char> determine_y_card( stack<pair<char, char>>& cards_pile,  stack<pair<char, char>>& hand, int y){
	if(y <= cards_pile.size()){
		int cards_to_delete = cards_pile.size() - y;
		while(cards_to_delete--)
			cards_pile.pop();
		return cards_pile.top();
	}else {
		int cards_to_delete = hand.size() - (y - cards_pile.size());
		while(cards_to_delete--){
			hand.pop();
		}
		return hand.top();
	}
	
}

int execute_steps( stack<pair<char, char>>& cards_pile){
	int x, y = 0;
	
	for(int i = 0; i < 3; i++){

		if((int(cards_pile.top().first) >= 65))
			x = 10;
		else
			x = cards_pile.top().first - '0';
		y += x;
		if(!cards_pile.empty()) cards_pile.pop();
		int cards_to_delete = 10 - x;
		while(cards_to_delete-- && !cards_pile.empty())
			cards_pile.pop();
	}
	return y;
}

void take_cards_on_hand( stack<pair<char, char>>& cards_pile,  stack<pair<char, char>>& hand){
	vector<pair<char,char>> backup;
	for(int cards_taken = 1; cards_taken <= 25; cards_taken++){
		if(!cards_pile.empty()){
			backup.push_back(cards_pile.top());
			cards_pile.pop();	
		}
	}
	for(int i = backup.size() - 1; i >= 0; i--)
		hand.push(backup[i]);
}

int main(){
	int t = 0; cin >> t; cin.ignore();
	char value, suit, c;
	for(int i = 1; i <= t; i++){
		pair<char, char> card;
		stack<pair<char, char>> cards_pile, hand;
		while((c = cin.get()) != '\n'){
			if(c != ' '){
				card.first = c;
				card.second = cin.get();
				cards_pile.push(card);
			}
		}
		take_cards_on_hand(cards_pile, hand);
		int y = execute_steps(cards_pile);
		card = determine_y_card(cards_pile, hand, y);
		cout << "Case " << i << ": " << card.first << card.second << endl; 
	}
	return 0;
}