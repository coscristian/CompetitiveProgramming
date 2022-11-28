#include<bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long int n, s;
    int totalCases, idTestCase;

    scanf("%d", &totalCases);

    for(idTestCase = 1; idTestCase <= totalCases; idTestCase++) {
        scanf("%llu", &s);
        n = (s + 1) * (s + 1) - 1;
        printf("%llu\n", n);        
    }
    return 0;
}