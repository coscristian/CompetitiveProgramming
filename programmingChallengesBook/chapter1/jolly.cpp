#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, ant, sig, cont = 0;

    while(cin >> n){
        if (n == 1){
            cin >> sig;
            cout << "Jolly\n";
            continue;
        }
        bool not_jolly= false;
        set<int> myset;
        pair<set<int>::iterator,bool> ret;
        for(int i = 1; i <= n; i++){
            cin >> sig;
            if (i == 1){
                ant = sig;
            }else{
                int dif = abs(ant-sig);
                ret = myset.insert(dif);
                if (dif < 1 || dif >= n || !ret.second){ // element was already inserted
                    not_jolly = true;
                }
                ant = sig;
            }
        }
        if(not_jolly)
            cout << "Not jolly\n";
        else
            cout << "Jolly\n";
    }
    return 0;
}
