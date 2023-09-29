#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums(3);
    for(int i = 0; i < 3; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    vector<int> sequence;
    int diff = abs(nums[0] - nums[1]), acum = diff;
    for(int i = nums[0]; i <= 20; i++){
        acum += diff;
        sequence.push_back(acum);
    }

    for(int i = 0; i < sequence.size(); i++)
        cout << sequence[i] << " ";

    for(int i = 0; i < sequence.size(); i++){
        if(nums[i] != sequence[i]){
            cout << sequence[i] << endl;
            break;
        }
    }

    return 0;
}


