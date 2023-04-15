#include<bits/stdc++.h>

using namespace std;

int main(){
    int X, N, P, ans = 0;
    scanf("%d %d", &X, &N);
    while(N--){
        scanf("%d", &P);
        ans += X; ans -= P;
    }
    cout << ans + X << endl;
    return 0;
}
