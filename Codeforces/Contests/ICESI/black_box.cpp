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

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int k; cin >> k;
    while(k--){
        string blank; getline(cin, blank);
        cin.ignore();

        int n,m; cin >> m >> n;
        vector<int> black_box_unor (m);
        vector<int> get_indexes(n);

        
        for(int i = 0; i < m; i++) cin >> black_box_unor[i];        
        for(int i = 0; i < n; i++) cin >> get_indexes[i];

        vector<int> black_box(m);
        black_box.assign(m, 2147483647);
        int index = 0, get_index = 0;
        for(int i = 0; i < m; i++){
            black_box[i] = black_box_unor[i];
            sort(black_box.begin(), black_box.end());
            if(i >= get_indexes[get_index]-1){
                cout << black_box[get_index] << endl;
                get_index++;
            }
        }
        cout << endl;
    }
    return 0;
}