#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cout << "Lumberjacks:" << endl;
    while(n--){
        vector<int> v(10);
        for(int i = 0; i < 10; i++)
            cin >> v[i];
        int counter = 0;
        for(int i= 0; i < 9; i++){
            if(v[i] > v[i+1])
                counter++;
            if(v[i] < v[i+1])
                counter--;
        }

        if(abs(counter) == 9)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
    return 0;
}
