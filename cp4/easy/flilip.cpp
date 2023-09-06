#include<bits/stdc++.h>

using namespace std;

int reverse_number(int n){
    int digits = log10(n) + 1;
    int ans = 0;
    for(int i = digits - 1; i >= 0; i--){
        ans += pow(10, i) * (n % 10);
        n /= 10;
    }
    return ans;
}

int main(){
    int a, b; cin >> a >> b;
    a = reverse_number(a);
    b = reverse_number(b);
    cout << max(a, b) << endl;
    return 0;
}
