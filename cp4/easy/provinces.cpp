#include<bits/stdc++.h>

using namespace std;

string get_best_victory_card(int power){
	if(power >= 8) return "Province";
	if(power >= 5) return "Duchy";
	if(power >= 2) return "Estate";
	return "0";
}

string get_best_treasure_card(int power){
	if(power >= 6) return "Gold";
	if(power >= 3) return "Silver";
	return "Copper";
}

int main(){
	int G, S, C, power = 0;
	cin >> G >> S >> C;

	power = 3*G + 2*S + C;
	string best_vict_card = get_best_victory_card(power);
	string best_treas_card = get_best_treasure_card(power);
	if(best_vict_card != "0") cout << best_vict_card << " or " << best_treas_card << endl;
	else cout << best_treas_card << endl;
	return 0;
}