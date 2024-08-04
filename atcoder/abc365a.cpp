#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int y;
	cin >> y;
	int ans = 0;
	if(y % 4 != 0){
		ans = 365;
	}
	if(y % 4 == 0 && y % 100 != 0){
		ans = 366;
	}
	if(y % 100 == 0 && y % 400 != 0){
		ans = 365;
	}
	if(y % 400 == 0){
		ans = 366;
	}
	cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
