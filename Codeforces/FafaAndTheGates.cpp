#include<bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x = 0, y = 0, xLinea = 0, yLinea = 0, monedas = 0;
    cin >> n;

    char caracteres[n];

    cin >> caracteres;

    
    for(char caracter: caracteres){
        if(caracter == 'U'){
            yLinea = y + 1;
            y++;
        }else{
            xLinea = x + 1;
            x++;
        }
            
        if ((x-1) == y || (y-1) == x)
            monedas++;

    }
    
   cout << monedas <<endl;
return 0;
}