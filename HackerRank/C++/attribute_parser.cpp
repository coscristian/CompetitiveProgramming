#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, Q, value_index = 0;
    string line;
    vector<string> v;
    cin >> N >> Q;

    while(N--) {
        getline(cin, line);
        v.push_back(line);
    }
    while(Q--) {
        getline(cin, line);
        for(string s: v) {
            int id_pos = s.find('~') - 1;
            string att = s.substr(id_pos + 2);
            int found = v.at(id_pos - 1).find(att);
            cout << "att: " << att << "\n";
            if (found != string::npos) {
                value_index = (found - 1) + att.length() + 5;
                string final_value = "";
                char c = s.at(value_index);
                while(c != '"') {
                    final_value += c;
                    c = s.at(++value_index);
                }
                cout << final_value << "\n";
            }else {
                cout << "Not Found!\n";
            }
        }
    }
    return 0;
}