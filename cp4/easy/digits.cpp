#include<bits/stdc++.h>

using namespace std;

int main(){
    string x0;
    while(true){
        cin >> x0;
        if(x0 == "END") break;

        int cont = 1;
        long long int ant = stoull(x0);
        int current_digits = x0.size();

        while(ant != current_digits){
            cont++;
            ant = current_digits;
            current_digits = log(current_digits) + 1;
        }
        cout << cont << endl;
    }
    return 0;
}
