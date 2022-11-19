#include<bits/stdc++.h>

using namespace std;

int main() {

    long long t, x, y, c;

    cin >> t;

    while(t--) {
        cin >> y >> x;
        c = max(x, y);
        long long cuad = c*c;
        if (cuad % 2 == 0)
            swap(x, y);
        cout << cuad - (y - 1) - (c-x) << "\n";
    }
    return 0;
}