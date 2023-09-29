#include<bits/stdc++.h>

using namespace std;

int solve(int digits[], int index, int digit, int product, int n, bool canAddOne){
    if(index == n) return product;
    if(canAddOne){
        int AddOneAns = solve(digits, index + 1, digits[index] + 1, product * (digits[index] + 1), n, false);
        int NoAddOneAns = solve(digits, index + 1, digits[index], product * digits[index], n, true);
    }
    int ans = max(AddedOneAns, NoAddOneAns);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int digits[n];
        for(int i = 0; i < n; i++)
            cin >> digits[n];

        int AddedOneAns = 0;
        int notAddedOneAns = 0;
        cout << solve(0, 1,true, digits, n, 0, 0) << endl;
    }
    return 0;
}

