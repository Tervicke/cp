#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	ll l,r,k;
	cin >> l >> r >> k;
	ll max = (r/k) + 1;
	if(max - l <= 0){
		cout << 0 << "\n";
	}else{
		cout << max - l << "\n";
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

