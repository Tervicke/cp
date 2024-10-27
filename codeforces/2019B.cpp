#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	ll n,q;
	cin >> n >> q;
	vector<ll> v(n+1);
	map<ll,ll> m;
	for(ll i = 1 ; i <= n ; i++){
		cin >> v[i];
	}
	for(ll i = 1 ; i <= n ; i++){
		m[ (i - 1) * (n - i + 1) + (n - i )] += 1;
	}
	for(ll i = 1 ; i < n ; i++){
		m[ i * (n - i) ] += v[i+1] - v[i] - 1;
	}
	while(q--){
		ll x;
		cin >> x;
		cout << m[x] << " ";
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
