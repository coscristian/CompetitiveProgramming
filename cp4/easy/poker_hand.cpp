#include<bits/stdc++.h>

using namespace std;

int main(){

    string pair;
    map<char, int> freq;
    
    for(int i = 0; i < 5; i++){
        cin >> pair;
        freq[pair[0]]++;
    }

    int ans = 0;
    for(auto item: freq)
        ans = max(ans, item.second);
    cout << ans << endl;
    return 0;
}