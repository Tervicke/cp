#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	long long a[n];
	for(int i  = 0 ; i < n ; i++){
		cin >> a[i];
	}
	long long dp[n+1];
	dp[n] = a[n-1];
	for(int i = n - 2; i >= 0 ; i--){
		dp[i+1] = max(dp[i+2]+1,a[i]);
	}
	cout << dp[1] << endl;
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
