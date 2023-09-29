#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string ans = "NO";
        while(n--){
            int x; cin >> x;
            if(x == k)
                ans = "YES";
        }
        cout << ans << endl;
    }

    return 0;
}
