// https://open.kattis.com/problems/acm
#include<bits/stdc++.h>

using namespace std;

struct question{
    bool status = false;
    int time = 0;
};

int main(){
    map<char, question> teamStats;
    int minutes;
    while(cin >> minutes && minutes != -1){
        char problemId; cin >> problemId;
        string status; cin >> status;

        if(status == "right"){
            teamStats[problemId].status = true;
            teamStats[problemId].time += minutes;
        }
        else
            teamStats[problemId].time += 20;
    }
    int rigths = 0, total = 0;
    map<char, question>::iterator it;
    for(it = teamStats.begin(); it != teamStats.end(); it++)
        if((it->second).status){
            rigths++; total += (it->second).time;
        }
    cout << rigths << " " << total << endl;
    return 0;
}

