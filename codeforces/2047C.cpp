#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int m = 2;
	int n;
	cin >> n;
	vector<vector<int>> v(m,vector<int>(n,0));
	for(int i = 0; i < m; i++){
		for(int j =0 ; j < n ; j++){
			cin >> v[i][j];
		}
	}
	int ans = 0;
	int mx = INT_MIN;
	for(int i = 0; i < n; i++){
		if(v[0][i] > v[1][i]){
			mx = max(mx,v[1][i]);
		}else{
			mx = max(mx,v[0][i]);
		}
		ans += max(v[0][i] , v[1][i]);
	}
	cout << ans + mx << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
