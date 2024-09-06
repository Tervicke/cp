#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int score[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	int ans = 0;
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			char x;
			cin >> x;
			if(x == 'X'){
				ans += score[i][j];
			}
		}	
	}
	cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
