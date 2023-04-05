#include<bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl

using namespace std;

// Dado un arreglo de n elementos, encontrar dos diferentes tal que la suma de ambos sea igual a X

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Happy Coding */
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        int d = x - v[i];
        for(int j = i + 1; j < n; j++){
            if(d == v[j]) cout << i << " forma una pareja con " << j << endl;
        }
    }
    return 0;
}
