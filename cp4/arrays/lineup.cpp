#include<bits/stdc++.h>

using namespace std;

bool are_equal(vector<string> a, vector<string> b){
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i]) return false;
    return true;
}

int main(){
    int n; cin >> n;
    vector<string> names(n);
    for(int i = 0; i < n; i++)
        cin >> names[i];

    vector<string> namesAsc = names;
    vector<string> namesDesc = names;

    sort(namesAsc.begin(), namesAsc.end());
    sort(namesDesc.rbegin(), namesDesc.rend());

    if(are_equal(names, namesAsc))
        cout << "INCREASING" <<endl;
    else if(are_equal(names, namesDesc))
        cout << "DECREASING" << endl;
    else
        cout << "NEITHER" << endl;
    return 0;
}
