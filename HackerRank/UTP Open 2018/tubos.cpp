#include<bits/stdc++.h>
bool used[14];
int tubes[12][2];


using namespace std;

bool solve(bool flag, int cant, int n, int last=-1) {
    if(cant == n)
        return true;
    bool ans = false;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            if(last == -1 || last == tubes[i][0]) {
                ans |= solve(flag, cant + 1, n, tubes[i][1]);
            }else{
                if(flag) {
                    ans |= solve(false, cant + 1, n, tubes[i][1]);
                }
            }
            used[i] = false;
        }
    }
    return ans;
    
}

int main() {

    int n;
    vector<string> salidas;
    while(scanf("%d", &n) != EOF){

        for (int i = 0; i < 14; i++) used[i] = false;
            
        for (int i = 0; i < n; i++) cin >> tubes[i][0] >> tubes[i][1];
        
        if (solve(false, 1, n))
            //cout << "si\n";
            salidas.push_back("si");
        else
            //cout << "no\n";
            salidas.push_back("no");
    }

    for (int i = 0; i < salidas.size(); i++) {
        cout << salidas.at(i) << endl;
    }
    

    return 0;
}