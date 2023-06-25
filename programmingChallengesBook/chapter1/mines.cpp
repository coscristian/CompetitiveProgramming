#include<bits/stdc++.h>

using namespace std;

int field[100][100];

void set_field(){
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++)
            field[i][j] = 0;
    }
}

void put_down(int x, int y, int n, int m){
    if(x < n - 1){
        field[x+1][y]++;
        if(y > 0) field[x+1][y - 1]++;
        if(y < m - 1) field[x + 1][y + 1]++;
    }
}

void put_right(int x, int y, int m){
    if(y < m - 1) field[x][y + 1]++;
}

void put_left(int x, int y){
    if(y > 0) field[x][y - 1]++;
}

void put_up(int x, int y, int m){
    if(x > 0){
        field[x - 1][y]++;
        if(y > 0) field[x - 1][y - 1]++;
        if(y < m - 1) field[x - 1][y + 1]++;
    }
}

void set_mine(int x, int y, int n, int m){
    field[x][y] = -10;
    put_down(x, y, n, m);
    put_right(x, y, m);
    put_up(x, y, m);
    put_left(x, y);
}

void print_field(int n, int m, int *cont){
    if (*cont >= 1) cout << "\n";
    cout << "Field #" << ++(*cont) << ":\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if (field[i][j] < 0) cout << "*";
            else cout << field[i][j];
        }
        cout << "\n";
    }
    
}

int main(){

    int n, m, cont = 0;
    string line;
    
    set_field();

    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        for(int i = 0; i < n; i++){
            cin >> line;
            int index = 0;
            while ((index = line.find("*", index)) != std::string::npos) { // Find the index ocurrences of "*"
                set_mine(i, index, n, m);
                index++;
            }
        }
        print_field(n, m, &cont);
        set_field();
        
    }
    return 0;
}