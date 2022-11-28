#include<bits/stdc++.h>

const unsigned long long int MAX = 18*1e18;

using namespace std;

int main() {

    unsigned long long int n, x, trian;
    
    while (scanf("%llu", &n) && n > 0) {
        x = (-1 + sqrt(1 + 8 * (double) n)) / 2;
        trian =  x * x + x - 2 * n;
        if (trian == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}