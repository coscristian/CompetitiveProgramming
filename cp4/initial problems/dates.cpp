#include<bits/stdc++.h>

using namespace std;

typedef tuple<int, int, int> iii;

int main(){

    vector<iii> birthdays;
    birthdays.emplace_back(5, 24, -1980);
    birthdays.emplace_back(5, 24, -1982);
    birthdays.emplace_back(11, 13, -1983);

    sort(birthdays.begin(), birthdays.end());

    for(auto &[mm, dd, yyyy]: birthdays)
        printf("%d %d %d\n", dd, mm, 2023 + yyyy);
    return 0;
}