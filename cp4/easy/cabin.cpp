#include<bits/stdc++.h>

using namespace std;

const int MAX_BAGS = 300;

float bag_feat[MAX_BAGS][4];

int main(){
    int n; cin >> n;
    float l, w, d, we;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < 4; j++)
            cin >> bag_feat[i][j];
    
    int counter = 0;
    for(int i = 0; i < n; i++){
        bool isValid = true;
        int accum = accumulate(bag_feat[i], bag_feat[i]+4, 0);
        if(accum > 125.00 || bag_feat[i][3] > 7.00) isValid = false;
        if(isValid){
            cout << 1 << endl;
            counter++;
        }else{
            cout << 0 << endl;
        }
    }
    cout << counter << endl;

    return 0;
}