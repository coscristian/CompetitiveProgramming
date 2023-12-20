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

    int n; cin >> n;
    int total_nums = 3*n;
    int nums[total_nums];

    for(int i = 0; i < total_nums; i++)
        cin >> nums[i];

    bool flag = true;
    for(int i = 0; i < total_nums; i++){
        if(nums[i] % 3 != 0){
            flag = false;
        }else{
            flag = true;
        }
    }
    cout << flag << endl;



    return 0;
}