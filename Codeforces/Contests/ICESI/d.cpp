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

bool is_char_in_string(char c, string s){
	for(int i = 0; i < 5; i++)
		if(s[i] == c) return true;
	return false;
}
 
string make_feedback(string &word, string &correct){
	string final_feedback = "";
	for(int i = 0; i < 5; i++){
		if(word[i] == correct[i])
			final_feedback += "*";
		else if(is_char_in_string(word[i], correct))
			final_feedback += "!";
		else
			final_feedback += "X"; 
	}
	return final_feedback;
}

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif

	int n; cin >> n;
	string correct, dict[n];
 
	cin >> correct; n--;
 
	for(int i = 0; i < n; i++)
		cin >> dict[i];
	
	int feedback_amount;
	cin >> feedback_amount;
 
	string feedbacks[feedback_amount];
 
	for(int i = 0; i < feedback_amount; i++)
		cin >> feedbacks[i];
 
	for(int i = 0; i < feedback_amount; i++){
		int possible_words = 0;
 
		if(feedbacks[i] == "*****")
			possible_words++;
		else{
			for(int j = 0; j < n; j++){
			if(make_feedback(dict[j], correct) == feedbacks[i])
				possible_words++;
			}
		}
		
		cout << possible_words << endl;
	}
    return 0;
}