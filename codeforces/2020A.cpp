#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
ll largestpower(ll n , ll k){
	ll power = 1;
	while(power * k <= n){
		power *= k;
	}
	return power;
}
void solve(){
	ll n,k;
	cin >> n >> k;
	ll ans = 0;
	if(n < k || k == 1){
		cout << n << "\n";
		return;
	}
	while(n >= k){
		n -= largestpower(n,k);
		ans++;
	}
	cout << ans + n<< "\n";
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
