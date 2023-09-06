#include<bits/stdc++.h>

using namespace std;

int calculate_sum(int n, int cont){
    if(n == 0) return cont;
    return calculate_sum(n/10, cont + n%10);
}

int main(){
    while(true){
        int n; cin >> n;
        if(n == 0) break;
        while(n >= 10){
            int cont = 0;
            n = calculate_sum(n, cont);
        }
        cout << n << endl;
    }
    return 0;
}
