#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    int v[3];
    cin >> t;

    while(t--) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v, v+3);
        cout << v[1] << "\n";
    }
}