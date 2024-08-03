#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
ll getwaterunits(vector<ll> v,ll h){
	ll sum = 0;
	ll n = lower_bound(v.begin(),v.end(),h)-v.begin();
	for(ll i = 0 ; i < n ; i++){
		if(h > v[i]){
			sum += h - v[i];
		}
	}
	return sum;
}
void solve(){
	ll n,x;
	cin >> n >> x;
	ll left = 0;
	ll right = 2*1e10 + x;
	vector<ll> v(n);
	for(ll i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	ll ans = 0;
	while(left <= right){
		ll mid = (left + right ) / 2;
		ll got_x = getwaterunits(v,mid);
		if(got_x <= x){
			ans = mid;
			left = mid + 1;
		}
		else{ right = mid - 1;  }
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

