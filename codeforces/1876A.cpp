#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll n,p;
	cin >> n >> p;
	vector<pair<ll,ll>> v(n,{0,0});
	for(int i = 0 ; i < n; i++){
		ll x;
		cin >> x;
		v[i].second = x;
	}
	for(ll i = 0 ; i < n; i++){
		ll x;
		cin >> x;
		v[i].first = min(p,x);
	}
	ll ans = p;
	ll cnt = n - 1;
	sort(v.begin(),v.end());
	for(auto p : v){
		ll r = min(p.second, cnt);
		ans+=r*p.first;
		cnt-=r;
	}
	cout << ans << endl;
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
