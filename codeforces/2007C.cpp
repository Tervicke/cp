#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll n,a,b;
	cin >> n >> a >> b;
	vector<ll> v(n);
	for(ll i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	a = gcd(a,b);
	for(ll i = 0 ; i < n ; i++){
		v[i] = v[i] % a;
	}
	sort(v.begin(),v.end());
	ll index = 0;
	ll mn = v[index];
	ll mx = v[n-1];
	ll ans = mx - mn;
	for(ll i = 0 ; i < n ; i++){
		ll temp = v[i] + a;
		if(temp > mx){
			mx = temp;
		}
		if(v[i] == v[index]){
			index++;
			if(index < n){
				mn = v[index];
			}
		}
		ans = min(ans,mx - mn);
	}
	ans = min(ans,mx - mn);
	cout << ans << "\n";
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
