#include <bits/stdc++.h>

using namespace std;

int main(){
    int ds, ys, dm, ym;
    cin >> ds >> ys >> dm >> ym;
    
    int max_size = 5000;
    vector<bool> correct_years(max_size);
    correct_years.assign(correct_years.size(), 0);
    
    for(int i = ys-ds; i <= max_size; i=i+ys)
        correct_years[i] = true;
        
    bool found = false;    
    for(int i = ym-dm; i <= max_size; i=i+ym){
      if(correct_years[i]){
            cout << i << endl;
            found = true;
            break;
        }  
    }
    
    if(!found) cout << max_size << endl; 
    return 0;
}
