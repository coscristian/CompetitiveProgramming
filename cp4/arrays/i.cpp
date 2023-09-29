#include<bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> empty_pos, frogs(n);
    for(int i = 0; i < n; i++) cin >> frogs[i];
    
    for(int i = 1; i <= 200000; i++){
        if(!binary_search(frogs.begin(), frogs.end(), i))
            empty_pos.push_back(i);
    }    
    int q; cin >> q;
    vector<int>::iterator low, upp;
    while(q--){
        int i, moved = 0; cin >> i;
        if(binary_search(empty_pos.begin(), empty_pos.end(), i)){
            upp = upper_bound(empty_pos.begin(), empty_pos.end(), i);
            moved = empty_pos[(upp - empty_pos.begin())];
            empty_pos[(upp - empty_pos.begin())] = i;
        }
        else{
            low = lower_bound (empty_pos.begin(), empty_pos.end(), i);
            moved = empty_pos[(low - empty_pos.begin())];
            empty_pos[(low - empty_pos.begin())] = i;
        }
        cout << moved << endl;
    }
    return 0;
}