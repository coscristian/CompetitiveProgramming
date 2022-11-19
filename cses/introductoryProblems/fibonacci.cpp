#include<bits/stdc++.h>

using namespace std;

long long solve(int n) {
    if(n <= 2) return n;
    if(memo[n] != -1) return memo[n];
    return solve(n-1) + solve(n-2);
}

int main() {

    for(int i = 0; i < tam; i++) {
        memo[i] = -1;
    }
    /*
    for(int i = 1; i < 6; i++) {
        cout << solve(i) << '\n';
    }*/

    cout << solve(1000000) << '\n';

    return 0;
}