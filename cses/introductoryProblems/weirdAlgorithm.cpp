#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    scanf("%lld", &n);
    while(n != 1) {
        printf("%lld ", n);
        if (n % 2 == 0){
            n /= 2;
        }else{
            n = 3*n + 1;
        } 
    }
    printf("%lld\n", n);
    return 0;
}