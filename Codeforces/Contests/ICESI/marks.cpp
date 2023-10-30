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

int subjects_marks[100][100];

bool is_best_student(int col, int total_rows, int student_row){
    for(int row = 0; row < total_rows; row++)
        if(subjects_marks[row][col] > subjects_marks[student_row][col])
            return false;
    return true;
}


int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        string subject_marks;
        cin >> subject_marks;
        for(int j = 0; j < m; j++)
            subjects_marks[i][j] = subject_marks[j];
    }

    int successful = 0, student_row = 0;
    for(int col = 0; col < m; col++){
        if(is_best_student(col, m, student_row++))
            successful++;
    }

    cout << successful << endl;

    return 0;
}