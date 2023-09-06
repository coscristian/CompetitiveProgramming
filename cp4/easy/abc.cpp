#include<bits/stdc++.h>

using namespace std;

int getNum(char type, int n1, int n2,int n3){
    if(type == 'A')
        return min(min(n1, n2), n3);
    return max(max(n1, n2), n3);
}

int main(){
    int n1, n2, n3;
    string order;
    cin >> n1 >> n2 >> n3;
    cin >> order;

    map<char, int> my_map;
    my_map['A'] = getNum('A', n1, n2, n3);
    my_map['C'] = getNum('C', n1, n2, n3);

    int sum = n1 + n2 + n3;
    sum -= my_map['A'];
    sum -= my_map['C'];

    my_map['B'] = sum;

    for(int i = 0; i < order.size(); i++){
        cout << my_map[order[i]];
        if(i != order.size() - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
