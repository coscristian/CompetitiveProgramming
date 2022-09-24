#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, aux, count = 0;
    cin >> n >> k;
    
    int arr[n+1];

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        if (arr[i] > 0 && arr[i] >= arr[k])
            count++;
    }

    cout << count << "\n";
    return 0;
}