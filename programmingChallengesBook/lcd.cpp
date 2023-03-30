#include<bits/stdc++.h>

#define ull unsigned long long int

using namespace std;

int get_amount_digits(int num){
	int count = 1;
	while(num != 0){
		num /= 10;
		count++;
	}
	return count;
}

void draw_one(int total_rows, int total_columns){
	for(int i = 0; i < total_rows; i++){
		for(int j = 0; j < total_columns; j++){
			bool initial_row = i == 0;
			bool middle_row = i == ceil(total_rows/2);
			bool last_row = i == total_rows - 1;
			bool last_column = j == total_columns - 1;
			if(initial_row || middle_row || last_row || !last_column) cout << " ";
			else cout << "|";
			if(last_column) cout << "\n";

		}
	}
}

int main(){
	int s = 0, num = 0;

	while(cin >> s && cin >> num && s != 0 && num != 0){
		ull total_columns = (s + 2) * get_amount_digits(num);
		int columns_per_digit = s + 2;
		int number_rows = 2*s + 3;
		int total_digits = get_amount_digits(num);
		int drawed_cols = 0;

		while(total_digits--){
			while(drawed_cols++ <= columns_per_digit){
				draw_one(number_rows, columns_per_digit);
				break;
			}
			break;
		}
	}
	return 0;
}
