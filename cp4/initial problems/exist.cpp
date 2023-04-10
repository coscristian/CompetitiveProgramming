#include<bits/stdc++.h>

const int MILLON = 1e6;

using namespace std;

int main(){
    int val = 0;
    vector<int> nums(MILLON);
    for(int i = 1; i <= MILLON; i++) nums[i - 1] = i;

    scanf("%d", &val);
    bool valueInVector = binary_search(nums.begin(), nums.end(), val);
    string ans = valueInVector ? "Value in Vector" : "Value not in Vector";
    cout << ans << endl;

    return 0;
}