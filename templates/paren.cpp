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

    stack<int> st;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push(i);
        else{
            if(st.empty()){
                cout << "Está mal" << endl;
                return 0;
            }
            cout << "match " << i << " " << st.top() << endl;
        }
    }

    if(st.size() == 0){
        cout << "esta bien" << endl;
    }else{
        cout << "está mal" << endl;
    }
    return 0;
}