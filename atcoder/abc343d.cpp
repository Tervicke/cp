#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	ll n,t;
	cin >> n >> t;
	vector<ll> v(n,0);
	map<ll,ll> m;
	m[0] = n;
	for(ll i = 0 ; i < t ; i++){
		ll a,b;
		cin >> a >> b;
		--a;
		if(m[v[a]] == 1){
			m.erase(v[a]);
		}else{
			m[v[a]]--;
		}
		v[a]+=b;
		m[v[a]]+=1;
		cout << m.size() << "\n";
	}
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
