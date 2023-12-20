#include<bits/stdc++.h>
#define ff first
#define ss second
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int MAX_VALUES = 1e6;;
int nums[MAX_VALUES];

void f(int index, set<int> s, int n){
    if(index == n){
        if(s.empty()) cout << "Empty" << endl;
        for(auto item: s) cout << item << " ";
        cout << endl;
    }else{
        //for(int i = index; i < n; i++){
            s.insert(nums[index]);
            f(index + 1, s, n);
            s.erase(nums[index]);
            f(index+1, s, n);
        //}
    }
}


int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> nums[i];

    set<int> s;
    f(0, s, n);


    return 0;
}