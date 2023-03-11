#include<bits/stdc++.h>

using namespace std;

string decimalToBinary(int n, string result){
    if (n == 0) return result;
    result = to_string(n % 2) + result;
    return decimalToBinary((int) floor(n / 2), result);
}

int main(){
    string result = "";
    cout << decimalToBinary(5, result) << endl;
    return 0;
}