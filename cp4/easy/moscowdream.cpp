#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    bool ans = a << 1 && b << 1 && c << 1 && a+b+c >= n && n>=3;
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
