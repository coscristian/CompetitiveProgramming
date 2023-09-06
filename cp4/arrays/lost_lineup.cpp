//https://open.kattis.com/problems/lostlineup
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int orig_order[n+1];

    for(int i = 0; i <= n; i++){
        orig_order[i] = -1;
    }

    for(int i = 2; i <= n; i++){
        int n; cin >> n;
        orig_order[n] = i;
    }

    cout << 1 << " ";
    for(int i = 0; i <= n; i++){
        if(orig_order[i] != -1)
            cout << orig_order[i] << " ";
    }
    cout << endl;
    return 0;
}
