#include<bits/stdc++.h>

const int total_elements = 1e5;

using namespace std;

int binarySearch (vector<int> A, int i, int j, int k){
    int m, result = -1;
    while (i <= j){
        m = (i + j) >> 1;
        if(A[m] == k){
            result = m;
            break;
        }
        else{
            if(k > A[m])
                i = m + 1;
            else
                j = m - 1;
            }
    }
    if( result == -1)
        result = ( -1) * i - 1;
    return result;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    vector<int> summation(total_elements);
    while(cin >> n) {
        cin >> summation[0];
        for(int i = 1; i < n; i++){
            cin >> x;
            summation[i] = summation[i - 1] + x;
        } 

        int last_summation_value = summation[n - 1], count = 0;
        if(last_summation_value % 3 == 0){
            int line1 = last_summation_value / 3;
            for(int i = 0; i < n; i++){
                int line2 = line1 + summation[i];
                int line3 = line2 + line1;
                if(binarySearch(summation, 1, n, line2) >= 0)
                    if(binarySearch(summation, 1, n, line3) >= 0)
                        count++;
            }
        }       
        cout << count << endl;
    }
    return 0;
}