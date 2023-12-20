#include<bits/stdc++.h>

using namespace std;

const int MAX_BATS = 100;

int bats[MAX_BATS];

int main(){

    int n; cin >> n;
    int b, counter = 0;

    for(int i = 0; i < n; i++){
        cin >> b;
        if(b == -1){
            bats[i] = 0;
            counter++;
        }else
            bats[i] = b;
    }
    double ans = accumulate(bats, bats+n, 0) / (n-counter+0.00);
    printf("%.10lf", ans);
    return 0;
}