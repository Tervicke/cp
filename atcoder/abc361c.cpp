#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	int ans = INT_MAX;
	for(int i = 0 ; i <= k; i++){
		ans = min(ans , v[i] - v[i+(n-k-1)]);
	}
	cout << ans << endl;
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
