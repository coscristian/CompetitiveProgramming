#include<bits/stdc++.h>
#define ff first
#define ss second
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int n, m; cin >> n >> m;
    int subjects_marks[n][m];
    
    int successful = 0;

    for(int i = 0; i < n; i++){
        string subject_marks;
        cin >> subject_marks;
        for(int j = 0; j < m; j++){
            int mark = subject_marks[j] - '0';
            subjects_marks[i][j] = mark;
        }
    }
    
    for(int i = 0; i < m; i++){
        int subject[m];
        for(int j = 0; j < n; j++)
            subject[j] = subjects_marks[j][i];
        sort(subject, subject+n);
        for(int k = 0; k < n; k++)
            cout << subject[k] << " ";
        
        cout << endl;
    }


/*
    vector<vector<int>> subject_marks; // [[], [], []]
    for (int columna = 0; columna < m; columna++) {
        subject_marks.push_back(vector<int>());
    }

    for (int fila = 0; fila < n; fila++) {
        for (int columna = 0; columna < m; columna++) {
            subject_marks[columna].push_back(subjects_marks[fila][columna]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(subject_marks[j][subject_marks[j].size()-1] == subjects_marks[i][j]){
                successful++;
            }
        }
    }
    cout << successful << endl;
*/
    return 0;
}