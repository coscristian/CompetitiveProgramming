#include<bits/stdc++.h>

using namespace std;

const int MAX_ROWS = 5;
const int MAX_COLUMNS = 40;

char characters[MAX_ROWS][MAX_COLUMNS];

int solve(int idx_start){
    if(characters[0][idx_start] == '.')
        return 1;
    if(characters[3][idx_start] == '*')
        return 2;
    return 3;
}

int main(){
    int n; cin >> n;

    for(int i = 0; i < MAX_ROWS; i++)
        for(int j = 0; j < 4*n; j++)
            cin >> characters[i][j];

    for(int i = 0; i < n; i++){
        cout << solve(4*i);
    }
    cout << endl;
    return 0;
}