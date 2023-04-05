#include<bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl

// Permutaciones posibles

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Happy Coding */

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    do{
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));


    return 0;
}

