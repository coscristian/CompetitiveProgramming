#include<bits/stdc++.h>

using namespace std;

const int max_n = 1e5;
int values[max_n][100];

int main(){
    int n, m; cin >> n >> m;
    vector<int> my_arr(n);
    memset(values, 0, sizeof values);
    
    for(int i = 0; i < n; i++) cin >> my_arr[i];

    int initial = my_arr[0];
    if(initial == 0)
        for(int i = 0; i < n; i++) values[0][i] = 1;
    else
        values[0][initial] = 1;
    
    return 0;
}