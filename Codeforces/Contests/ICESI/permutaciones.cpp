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

const int N = 2e5+2;
const int oo = 1e9;
const int MOD = 1e9+7;
const int LOG2 = 20;

int a[N], n;
int used[N];

void rec(vector<int> &per){
    if(per.size() == n){
        for(int i = 0; i < n; i++) cout << i << " ";
        cout << endl;
    }else{
        for(int i = 0; i< n; i++){
            if(!used[i]){
                used[i] = 1;
                per.push_back(a[i]);
                rec(per);
                per.pop_back();
                used[i] = 0;
            }
        }
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

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> p;
    rec(p);

    return 0;
}