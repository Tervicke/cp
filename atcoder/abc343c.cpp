#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	ll n;
	cin >> n;
	ll ans = 0;
	for(ll i = 1 ; i*i*i <= n ; i++){
		ll y = i*i*i;
		string s = to_string(y);
		string t = s;
		reverse(s.begin() , s.end());
		if(s == t){
			ans = y;
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
