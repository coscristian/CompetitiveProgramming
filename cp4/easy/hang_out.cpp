#include<bits/stdc++.h>

using namespace std;

int main(){
    int L, x, people_on = 0;
    cin >> L >> x;
    
    string event;
    int amount, not_allowed = 0;
    while(x--){
        cin >> event >> amount;
        if(event == "enter"){
            if(people_on+amount > L)
                not_allowed++;
            else
                people_on += amount;
        }else
            people_on -= amount;
    }
    cout << not_allowed << endl;
    return 0;
}