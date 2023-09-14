//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2726
#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int B, N; cin >> B >> N;
        if(B == 0 && N == 0) break;
        int reserves[B+1];
        char ans = 'S';
        for(int i = 1; i <= B; i++)
            cin >> reserves[i];
        while(N--){
            int D, C, V; cin >> D >> C >> V;
            reserves[D] -= V;
            reserves[C] += V;
        }
        for(int i = 1; i <= B; i++)
            if(reserves[i] < 0)
                ans = 'N';
        cout << ans << endl;
    }
    return 0;
}
