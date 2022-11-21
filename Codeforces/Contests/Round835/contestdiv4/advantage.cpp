#include<bits/stdc++.h>
#define lld long long int 

using namespace std;

bool equal_elements(vector<lld> v) {
    lld value = v.at(0);
    for(lld elem: v) {
        if(value != elem) 
            return false;
    }
    return true;
}

int main() {

    int t, n;
    lld s;
    bool flag = false;
    cin >> t;
    while(t--) {
        vector<lld> v, ordered;
        cin >> n;
        while(n--) {
            cin >> s;
            v.push_back(s);
        }
        ordered = v;
        sort(ordered.begin(), ordered.end());
        int last_pos = ordered.size() - 1;
        if (equal_elements(v)) {
            for(int i = 0; i < v.size(); i++) {
                cout << 0 << " ";
            }
        }else {
            for(lld value: v) {
                int last = ordered.at(last_pos);
                
                if (value != last) {
                    cout << value - last << " ";
                    last_pos = ordered.size() - 1;
                }else {
                    int last_pos_rep = last_pos;
                    while(true){
                        if (!flag)
                            last_pos_rep--;
                        last = ordered.at(last_pos_rep);
                        if(value != last || flag == true) {
                            cout << value - last << " ";
                            flag = false;
                            break;
                        }else {
                            flag = true;
                        }
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}