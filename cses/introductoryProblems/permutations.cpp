#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> vPar, vImpar, vPer;
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if (i % 2 == 0) vPar.push_back(i);
        else vImpar.push_back(i);
    }

    if (n == 1 || abs(vPar.at(vPar.size()-1)-vImpar.at(0)) > 1){
        for(int val: vPar){
            cout << val << " ";
        }
        for(int val: vImpar){
            cout << val << " ";
        }
        cout << "\n";
    }else{
        cout << "NO SOLUTION\n";
    }
    return 0;
}