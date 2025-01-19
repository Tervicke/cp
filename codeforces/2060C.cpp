#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//all the best
const long long mod = 10e9 + 7;
void solve() {
	ll n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(ll i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ll ans = 0;
	map<ll,ll> m;
	for (auto e : v) {
		if(m[k - e] > 0){
			ans++;
			m[k - e]--;
		}
		else{
				m[e]++;
		}
  }
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}

