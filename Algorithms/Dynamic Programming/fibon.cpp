#include<bits/stdc++.h>

using namespace std;

const int nmax = 1e5; // n Maximo
const int no_seen = -1;

int dp[nmax];

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != no_seen) return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    cout << dp[n] << endl;
    return dp[n];
}

int main() {

    for(int i = 0; i < nmax; ++i) dp[i] = no_seen;

    //cout << fib(6) << "\n";
    cout<< fib(6) << "\n";

    return 0;
}