#include<bits/stdc++.h>

using namespace std;


int main(){
    string line;
    int cont = 0.0;
    cin >> line;

    for(int i = 0; i < line.size(); i++){
        if (line[i] == '+') line[i] = '1';
        else if(line[i] == '–') line[i] = '0';
    }

    cout << line <<endl;

    for(int i = 0; i < line.size() - 1; i++){
        char ant = line[i];
        char sig = line[i+1];
        if(line[i] == line[i+1]){
            cont++;
        }
    }
    cout << cont << endl;

    cout << ceil(cont / 2) << endl;
        
    return 0;
}     