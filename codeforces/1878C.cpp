#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	ll n,k,x;
	cin >> n >> k >> x;
	ll min_sum = (k*(k+1)) / 2;
	ll max_sum = (n*(n+1)) / 2 - ((n-k)*(n-k+1)) / 2;
	if(x >= min_sum && x<= max_sum){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
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
