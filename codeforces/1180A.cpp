#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long n;
	cin >> n;
	vector<long long> dp(n+1,0);
	dp[1]  = 1; 
	for(long long i = 2 ; i <= n ; i++){
		dp[i] = (i-1)*4 + dp[i-1];
	}
	cout << dp[n] << endl;
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
