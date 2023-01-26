#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q,i, j, arr_length, data;

    cin >> n >> q;
    vector<vector<int>> a;
    while(n--) {
        cin >> arr_length;
        vector<int> b;
        for(int i = 1; i <= arr_length; i++) {
            cin >> data;
            b.push_back(data);
        } 
        a.push_back(b);
    }
    while(q--) {
        cin >> i >> j;
        cout << a.at(i)[j] << "\n";
    }
    return 0;
}

