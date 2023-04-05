#include<bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n; char c, d; bool can_insert = true; string num;
        cin >> n >> d;
        string ans = "";
        while(n--){
            cin >> c;
            if(can_insert && c < d){
                ans+=d; can_insert = false;
            }
            ans += c;
        }
        if(can_insert){
            ans+=d;
        }
        cout << ans << endl;
    }
    return 0;
}

