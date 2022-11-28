#include<bits/stdc++.h>

int main() {

    unsigned long long int gauss, i, s, page;

    while(scanf("%llu", &s) && s > 0) {
        page = (-1 + (unsigned long long int) sqrt(1 + 8 * s)) / 2;
        page++;
        gauss = page * (page + 1) / 2;
        if (gauss == s) 
            printf("%llu %llu\n", page + 1, page + 1);
        else{
            printf("%llu %llu\n", gauss - s, page);
        }
            
    }
    return 0;
}