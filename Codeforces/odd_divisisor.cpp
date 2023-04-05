#include<bits/stdc++.h>

#define ull unsigned long long int

using namespace std;

int main(){
    int t;
    ull n;

    cin >> t;
    while(t--){
        cin >> n;
        bool odd = false;
        if(n % 2 == 0){
            while((n = n / 2) != 1){
                if(n % 2 != 0){
                    odd = true; break;
                }
            }
        }else{
            odd = true;
        }
        if(odd) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
