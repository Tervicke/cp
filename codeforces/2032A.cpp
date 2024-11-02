#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	int on = 0;
	for(int i = 0; i < 2*n ; i++){
		int x;
		cin >> x;
		on+=x;
	}
	int off = (2*n) - on;
	cout << on % 2 << ' ' << min(on , off) << "\n";
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

