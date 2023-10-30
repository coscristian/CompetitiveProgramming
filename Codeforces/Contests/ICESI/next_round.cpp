#include<bits/stdc++.h>
#define ff first
#define ss second
#define ALL(s) s.begin(),s.end()
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int MAX_VALUES = 50;
int scores[MAX_VALUES];

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int k, n;
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> scores[i];
    
    int advance = 0;
    for(int i = 0; i < n; i++){
        int current_score = scores[i];
        if(i+1 > k && current_score != scores[i-1])
            break;
        else if(current_score > 0)
            advance++;
    }

    cout << advance << endl;






    return 0;
}