#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	ll n,q;
	cin >> n >> q;
	ll odd_cnt = 0;
	vector<ll> prefix(n+1);
	prefix[0] = 0;
	for(int i = 1 ; i <= n ; i++){
		ll x;
		cin >> x;
		prefix[i]=prefix[i-1]+x;
	}
	while(q--){
		ll l,r,k;
		cin >> l >> r >> k;
		ll sum = prefix[l-1] + prefix[n] - prefix[r] + (k*(r-l+1));
		if(sum % 2 == 1){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
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
