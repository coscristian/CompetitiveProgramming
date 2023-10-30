// https://codeforces.com/problemset/problem/918/B
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

    int n, m; cin >> n >> m;
    map<string, string> server_info;
    while(n--){
        string name, ip;
        cin >> name >> ip;
        server_info[ip] = name;
    }

    while(m--){
        string command, ip;
        cin >> command >> ip;
        string ip_num = ip.substr(0, ip.size()-1);
        cout << command << " " << ip << " #" << server_info[ip_num] << endl;
    }


    return 0;
}