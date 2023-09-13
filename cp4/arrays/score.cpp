// https://onlinejudge.org/external/15/1585.pdf
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string test; cin >> test;
        int consec = 0, sum = 0, aux = 0;
        for(int i = 0; i < test.size(); i++){
            if(test[i] == 'O')
                consec++;
            else
                consec = 0;
            if((i < test.size() - 1 && test[i+1] == 'X') || (i == test.size() - 1))
                sum += consec * (consec + 1) / 2;
        }
        cout << sum << endl;
    }
    return 0;
}
