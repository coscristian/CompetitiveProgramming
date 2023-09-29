#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> digits(n);
        int v;
        for(int i = 0; i < n; i++){
            cin >> digits[i];
        }
        sort(digits.begin(), digits.end());
        int product = 1;
        digits[0]++;
        for(int i = 0; i < n; i++)
            product *= digits[i];
        cout << product << endl;
    }
    return 0;
}

