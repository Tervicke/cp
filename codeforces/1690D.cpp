#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> v(n+1,0);
	for(int i = 1; i <= n ; i++){
		if(s[i-1] == 'W'){
			v[i] = v[i-1] + 1;
		}else{
			v[i] = v[i-1];
		}
	}
	int ans = INT_MAX;
	for(int i = k ; i <= n ; i++){
		ans = min(ans , v[i] - v[i-k]);
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
