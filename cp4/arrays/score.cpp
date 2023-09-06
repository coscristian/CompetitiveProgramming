// https://onlinejudge.org/external/15/1585.pdf
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string test; cin >> test;
        int consec = 0, sum = 0, aux = 0;
        for(int i = 0; i < test.size(); i++){
            if(test[i] == 'O'){
                consec++;
                aux = consec;
            }else{
                sum += consec * (consec + 1) / 2;
                consec = 0;
            }
        }
        cout << sum + aux * (aux + 1) / 2 << endl;
    }


    return 0;
}
