#include<bits/stdc++.h>
#define lld long long int 

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lld n;

    cin >> n;
    lld a[n], x = 0, nValue = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        if (a[i] < a[i-1]){
            nValue = a[i-1] - a[i];
            x += nValue;
            a[i] += a[i-1] - a[i];
        }
    }
    cout << x;
    return 0;
}