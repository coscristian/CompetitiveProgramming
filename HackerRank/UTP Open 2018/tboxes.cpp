#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long int n, smaller, largest, i, x;
    scanf("%ld", &n);

    for (i = 0; i < n; i++) {
        scanf("%ld", &x);
        if (i == 0)
            smaller = largest = x;
        else if(x < smaller) 
            smaller = x;
        else if(x > largest)
            largest = x;
        printf("%ld\n", smaller+largest);   
    }
    return 0;
}