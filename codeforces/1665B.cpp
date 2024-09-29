#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	int mxcnt= 0;
	for(auto p : m){
		mxcnt = max(mxcnt , p.second);
	}
	int ans = n - mxcnt;
	while(mxcnt < n){
		ans++;
		mxcnt += mxcnt;
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
