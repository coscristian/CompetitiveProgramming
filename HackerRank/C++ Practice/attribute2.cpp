#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, Q, value_index = 0;
    string line;
    vector<string> v;
    cin >> N >> Q;

    getline(cin >> ws, line);
    v.push_back(line);
    N--;

    while(N--) {
        getline(cin, line);
        v.push_back(line);
    }
    while(Q--) {
        cin >> line;
        int id_pos = line.find('~') - 1;
        string att = line.substr(id_pos + 2);
        int v_index = stoi(string(1, line.at(id_pos))) - 1;
        int found = v.at(v_index).find(att);
        if (found != string::npos) {
            value_index = (found-1) + att.length() + 5;
            string final_value = "";
            char c = v.at(v_index).at(value_index);
            while(c != '\"') {
                final_value += c;
                c = v.at(v_index).at(++value_index);;
            }
            cout << final_value << "\n";
        }else {
            cout << "Not Found!\n";
        }
        }
    return 0;
}