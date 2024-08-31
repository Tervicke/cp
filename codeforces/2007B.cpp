#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll n , m;
	cin >> n >> m;
	vector<ll> v(n);
	for(ll i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	ll mx = v[n-1];
	vector<ll> ans;
	for(ll i = 0 ; i < m ; i++){
		char c;
		ll l,r;
		cin >> c;
		cin >> l >> r;
		if(mx >= l && mx <= r){
			if(c == '+'){mx++;}
			if(c == '-'){mx--;}
		}
		ans.push_back(mx);
	}
	for(auto i : ans){
		cout << i << ' ';
	}
	cout << "\n";
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
