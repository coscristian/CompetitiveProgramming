#include<bits/stdc++.h>

using namespace std;

int main(){

	int day, month, year, week_day;
	int day2, month2, year2, ans = 0;
	cin >> day >> month >> year >> week_day;
	cin >> day2 >> month2 >> year2;

	if(year == year2 && month == month2){
		int days = day2 - day;
		ans = (days % 7);
	}else{
		int diff_year_months = (year2 - year - 1) * 12;
		int remaining_months = (12 - month + month2 + diff_year_months) * 30;
		int days = 30 - day + day2 + remaining_months;
		ans = (days % 7);
	}
	if(week_day != 7) ans= abs(week_day - ans);

	cout << ans << endl;


	return 0;
}