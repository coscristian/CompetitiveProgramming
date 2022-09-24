#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int t, i, a, b;
    int amount;
    scanf("%ld", &t);

    for (i = 0; i < t; i++){
        scanf("%ld %ld", &a, &b);
        amount = (int) a * log10(2) + (int) b * log10(5) + 1;
        printf("%d\n", amount);
    }
    return 0;
}