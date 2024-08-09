#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	ll n;
	cin >> n;
	vector<pair<ll,ll>> v;
	ll sum = 0;
	vector<ll> headheight(n);
	for(int i = 0 ; i < n ; i++){
		ll a,b;
		cin >> a >> b;
		sum += a; 
		v.push_back({a,b});
	}
	ll ans = 0;
	for(int i = 0 ;i < n ; i++){
		ans = max(ans,(sum - v[i].first)+ v[i].second);
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

