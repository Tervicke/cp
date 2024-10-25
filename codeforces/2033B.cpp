#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	vector<vector<int>> v(n,vector<int>(n));
	for(int i = 0; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> v[i][j];
		}
	}
	int ans  = 0;
	int t = (n+1)/2;
	int i = 0 , j = 0;
	for(int start = 0 ; start <= n ; start++){
		j = start;
		i = 0;
		int min_value = INT_MAX;
		while(j < n && i < n){
			min_value = min(min_value , v[i][j]);
			j++;
			i++;
		}
		if(min_value < 0){
			ans += min_value*-1;
		}
	}
	for(int start = 1 ; start <= n ; start++){
		j = 0;
		i = start;
		int min_value = INT_MAX;
		while(j < n && i < n){
			min_value = min(min_value , v[i][j]);
			j++;
			i++;
		}
		if(min_value < 0){
			ans += min_value*-1;
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
