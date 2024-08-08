#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	vector<ll> l,r;
	for(ll i = 0 ;i < n ; i++){
		ll l1,r1;
		cin >> l1 >> r1;
		l.push_back(l1);
		r.push_back(r1);
	}
	sort(r.begin(),r.end());
	ll ans = (n*(n-1)) / 2;
	for(auto l1 : l){
		auto it = lower_bound(r.begin(),r.end(),l1);
		ans -= (it - r.begin());
	}
	cout << ans << endl;
	return 0;
}
