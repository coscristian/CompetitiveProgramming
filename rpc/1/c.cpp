#include<bits/stdc++.h>

using namespace std;

map<int, vector<pair<char, int>>> my_map;

int obt_posicion_letra(char letra, int pos){
	for(int i = 0; i < my_map[pos].size();i++){
		if(my_map[pos][i].first == letra) return i;
	}	
	return -1; // NO está agregada aún
}

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){
	int n; cin >> n;

	while(n--){
		string s; cin >> s;
		int cont_pos = 1;
		for(int i = 0; i < s.size(); i++){
			pair<char, int> nuevo_par;
			int posicion_letra = obt_posicion_letra(s[i], i+1);
			if(i+1 == cont_pos && posicion_letra == -1){ 
				nuevo_par.first = s[i];
				nuevo_par.second = 1;
				my_map[cont_pos].push_back(nuevo_par);
			}else{
				my_map[cont_pos][posicion_letra].second++;
			}
			cont_pos++;
		}
	}
	for(auto const& x: my_map){
		sort(my_map[x.first].begin(), my_map[x.first].end(), sortbysec);
	}

	map<int, vector<char>> map_char_tie_frec;
	vector<char> characters;
	for(auto const& x: my_map){
		int arr_size = my_map[x.first].size();
		for(int i = 0; i < arr_size; i++){
			if(i == 0){ // Last element (First)
				char pair_letter = my_map[x.first][arr_size-1].first;
				map_char_tie_frec[x.first].push_back(pair_letter);
			}else{
				if(my_map[x.first][arr_size-i-1].second == my_map[x.first][arr_size-i].second){
					char pair_letter = my_map[x.first][arr_size-i-1].first;
					map_char_tie_frec[x.first].push_back(pair_letter);
				}else{
					break;
				}
			}
		}
	}	

	for(auto const& x: map_char_tie_frec){
		sort(map_char_tie_frec[x.first].begin(), map_char_tie_frec[x.first].end());
	}

	for(auto const& x: map_char_tie_frec){
		cout << x.first << ": ";
		for(int i = 0; i < map_char_tie_frec[x.first].size(); i++){
			if(i == map_char_tie_frec[x.first].size()-1)
				cout << map_char_tie_frec[x.first][i];
			else
				cout << map_char_tie_frec[x.first][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
