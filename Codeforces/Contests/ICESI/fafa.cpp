//https://codeforces.com/problemset/problem/935/B
#include<bits/stdc++.h>
#define ff first
#define ss second
#define All(s) s.begin(),s.end()
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int n, up_count = 0, rigth_count = 0, coins = 0;
    cin >> n;
    char moves[n];
    
    for(int i = 0; i < n; i++) cin >> moves[i];
    for(int i = 0; i < n; i++){
        if(moves[i] == 'U') up_count++;
        else rigth_count++;

        bool is_on_gate = rigth_count == up_count;

        if(is_on_gate && i <= n - 2 && moves[i] == moves[i+1]){
            coins++;
        }
    }

    cout << coins << endl;

    return 0;
}