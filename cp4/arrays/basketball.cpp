#include<bits/stdc++.h>

using namespace std;

int main(){
    string game; cin >> game;
    int alice = 0; int barbara = 0;
    char ans = 'A';
    for(int i = 1; i <= game.size(); i+=2){
        //if(i%2 != 0){
        char player = game[i-1];
        if(player == 'A')
            alice += int(game[i+1]) - 48;
        else
            barbara += int(game[i+1]) - 48;
        if(alice - barbara >= 2 || alice >= 11){
            ans = 'A'; break;
        }
        else if (barbara - alice >= 2 || barbara >= 11){
            ans = 'B'; break;
        }

        //}
    }
    cout << ans << endl;

    return 0;
}
