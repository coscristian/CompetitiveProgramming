#include<bits/stdc++.h>

using namespace std;

int main() {

    set<int> people;
    int N, H, i, j, fratern = 0;
    
    scanf("%d %d", &N, &H);

    while(scanf("%d %d", &i, &j) != EOF) {
        if (people.find(i) != people.end()) {
            people.insert(j);
        }else {
            people.insert(i);
            people.insert(j);
            fratern++;
        }
    }
    cout << fratern << " " << (N - people.size()) << "\n" ;
    return 0;
}