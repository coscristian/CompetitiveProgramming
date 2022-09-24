#include<bits/stdc++.h>
using namespace std;

bool vectoresIguales(int v[], int v2[], int n){
    int i;
    for(i=0; i<n; i++){
        if (v[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main() {

    int n,i, cont, j;
    
    while(true){
        cin >> n;
        if( n == 0) {
            break;
        }
        cont = 0;
        int v[n], v2[n], v3[n], vOrdenado[n];

        for(i=0; i<n; i++){
            cin >> v[i];
        }

        for(i =1; i <=n; i++){
            vOrdenado[i-1] = i;
            v2[i-1] = i;
        }

        for(i= 0; i < n; i++){
            v3[i] = 0;
        }

        if(vectoresIguales(v, vOrdenado, n)){
            cout << 0 << "\n";
            continue;
        }
        while(true){
            for(i = 0; i < n; i++){
                v3[v[i]-1] = v2[i];
            }
            if (vectoresIguales(v3, vOrdenado, n)){
                break;
            }
            for(i=0; i < n;i++){
                v2[i] = v3[i];
            }
            cont++; 
        }
        if (n == 2){
            cout << cont <<endl;
        }else{
            cout << cont+1 <<endl;
        }
    }
    cout<<"\n";
    return 0;
}
