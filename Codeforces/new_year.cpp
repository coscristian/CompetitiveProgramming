#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        bool flag = false;
        for(int i = 0; i*2021 <= n; i++){
            if((n-2021*i) % 2020 == 0){
                flag = true; break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
