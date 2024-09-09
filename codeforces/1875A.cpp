#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	ll a,b,n;
	cin >> a >> b >> n;
	ll sum = b;
	for(ll i = 0 ; i < n ; i++){
		ll x;
		cin >> x;
		sum+=min(a-1,x);
	}
	cout << sum << "\n";
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
