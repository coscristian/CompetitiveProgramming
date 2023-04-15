#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    float ans = 0.0, q, p;
    cin >> N;
    while(N--){
        scanf("%f %f", &q, &p);
        ans = ans + q * p;
    }
    printf("%.3f\n", ans);

    return 0;
}
