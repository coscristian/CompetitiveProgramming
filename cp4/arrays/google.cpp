// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3166
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        map<int, vector<string>> my_map;
        int max_rank = 0;
        for(int j = 1; j <= 10; j++){
            string url; cin >> url;
            int ranking; cin >> ranking;
            max_rank = max(ranking, max_rank);
            my_map[ranking].push_back(url);
        }
        cout << "Case #" << i << ":" << endl;
        for(int k = 0; k < my_map[max_rank].size(); k++)
            cout << my_map[max_rank][k] << endl;
    }

    return 0;
}
