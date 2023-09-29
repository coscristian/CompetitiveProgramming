#include<bits/stdc++.h>

using namespace std;

int solve(int index, int product, bool start, int digits[], int n, int AddedOneAns, int notAddedOneAns){
    if(index == n-1) return product * digits[index];
    if(start){
        AddedOneAns += solve(index+1, product * (digits[index] + 1), false, digits, n, );
        cout << "Rama Izq: " << AddedOneAns << endl;
        notAddedOneAns += solve(index+1, product * digits[index], true, digits, n);
        //cout << "Rama"
    }
    return solve(index+1, product * digits[index], false, digits, n);
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
