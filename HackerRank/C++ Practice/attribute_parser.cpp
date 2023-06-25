#include<bits/stdc++.h>

using namespace std;

vector<string> tag_stack;
map<string, string> attrs;

void insert_attr(string name, string value) {
    string full;
    for(string str: tag_stack) full += str + ".";
    full.pop_back();
    full += "~" + name;
    attrs[full] = value;
}

int main() {

    int n, q;

    cin >> n >> q;

    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(cin.peek()=='/') {
            string cn; 
            cin >> cn;
            tag_stack.pop_back();
        }else {
            string name;
            cin >> name;
            if(name.back() == '>') {
                name.pop_back();
                tag_stack.push_back(name);
            }else { // tag has attribute
                tag_stack.push_back(name);
                for(;;) {
                    string att_name, att_val, eq;
                    cin >> att_name >> eq >> att_val;
                    if(att_val.back() == '>') {
                        att_val.pop_back();
                        att_val.pop_back();
                        att_val = att_val.substr(1);
                        insert_attr(att_name, att_val);
                        break;
                    }else {
                        att_val.pop_back();
                        att_val = att_val.substr(1);
                    }
                    insert_attr(att_name, att_val);
                }
            }
        }
    }
    for(int i = 0; i < q; i++) {
        string quer;
        cin >> quer;
        if(attrs.find(quer) != attrs.end())
            cout << attrs[quer] << "\n";
        else
            cout << "Not Found!" << "\n";
    }   
    return 0;
}