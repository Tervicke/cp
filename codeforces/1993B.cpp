#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll n;
	cin >> n;
	vector<ll> v;
	ll noOdd = 0;
	ll maxOdd = -1;
	for(ll i = 0 ; i < n ; i++){
		ll x;
		cin >> x;
		if(x % 2 == 1){
			noOdd++;
			maxOdd = max(x,maxOdd);
		}else{
			v.push_back(x);
		}
	}

	ll ans = 0;
	if(noOdd == 0 || noOdd == n){
		cout << ans << "\n";
		return;
	}
	sort(v.begin(),v.end());
	for(ll i = 0 ; i < v.size(); i++){
		if(v[i] > maxOdd){
			ans+=2;
			maxOdd = *(v.end() -1)*2 + maxOdd;
		}else{
			ans++;
			maxOdd += v[i];
		}
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
