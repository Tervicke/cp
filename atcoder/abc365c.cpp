#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
ll gettotal(vector<ll> v,ll m){
	ll total = 0;
	for(ll i = 0 ; i < v.size() ; i++){
		total+=min(m,v[i]);
	}
	return total;
}
void solve(){
	ll m,n;
	cin >> n >> m;
	vector<ll> v(n);
	ll total = 0;
	for(ll i = 0 ; i < n ; i++){
		cin >> v[i];
		total += v[i];
	}

	if(gettotal(v,m) <= m){
		cout << "infinite\n";
		return;
	}

	ll left = 0;
	ll right = 2e9;
	ll ans = 0;

	while(left<=right){
		ll mid = (left + right )  / 2;
		ll total  = gettotal(v,mid);
		if(total <= m){
			ans = max(mid,ans);
			left = mid + 1;
		}else{
			right = mid - 1;
		}
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

