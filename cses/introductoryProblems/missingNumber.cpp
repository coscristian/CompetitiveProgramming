#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lld sum = 0, n, x;
    
    cin >> n;

    for(int i = 1; i < n; i++) {
        cin >> x;
        sum += x;
    }
    cout << n*(n+1)/2 - sum << "\n";
    return 0;
}