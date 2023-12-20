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

int counter[26];

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    string s; cin >> s;
    int n; cin >> n;
    char first_char = 'a';
    int inv = 0;
    for(int i = 0; i < s.size(); i++){
        int index = int(s[i]) - int(first_char);
        int temp_acum = 0;
        for(int j = index+1; j < 26; j++)
            temp_acum += counter[j];
        inv += temp_acum;
        counter[index]++;
    }

    inv *= n;

    int g = 0;
    for(int i = 0; i < 26; i++)
        for(int j = i+1; j < 26; j++)
            g += counter[i] * counter[j];

    inv += g * n * (n - 1);
    const unsigned int M = 1000000007;

    cout << inv % M << endl;
    return 0;
}