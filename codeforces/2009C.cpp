#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll x, y, k;
	cin >> x >> y >> k;
	ll a = ceil((double)x/k);
	ll b = ceil((double)y/k);
	if(a <= b){
		cout << 2*b << "\n";
	}else{
		cout << 2*a - 1 << "\n";
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
