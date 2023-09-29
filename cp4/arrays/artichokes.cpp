#include<bits/stdc++.h>

using namespace std;

int main(){
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;
    double max_price = 0.0, max_decline = 0.0;
    for(int k = 1; k <= n; k++){
        double price = p * (sin(a * k + b) + cos(c * k + d) + 2);
        if(price > max_price) max_price = price;
        if(max_price - price > max_decline)
            max_decline = max_price - price;
    }
    printf("%.10f\n", max_decline);
   // cout << setprecision(6) << max_decline << endl;
    return 0;
}
