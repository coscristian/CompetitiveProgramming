#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, ans;
    cin >> t;
    while(t--){
        cin >> n;
        int test = (n*567 / 9 + 7492) * 235 / 47 - 498;
        ans = test < 0 ? -test : test;
        cout << (ans / 10) % 10 << endl;
    }
    return 0;
}
