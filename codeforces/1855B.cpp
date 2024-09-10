#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	ll n;
	cin >> n;
	ll index = 1;
	ll ans = 0;
	while(true){
		if(n % index == 0){
			ans++;
			index++;
		}else{
			break;
		}
	}
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
