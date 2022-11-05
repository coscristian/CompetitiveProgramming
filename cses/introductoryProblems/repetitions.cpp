#include<bits/stdc++.h>

using namespace std;

int main() {

    string cad;
    char act = 'A';
    int cont = 0, mayor = 1;

    cin >> cad;

    for(char act_cad: cad) {
        if (act_cad == act) {
            cont++;
            mayor = max(cont, mayor);
        }else {
            act = act_cad;
            cont = 1;
        }
    }
    cout << mayor << "\n";
    return 0;
}