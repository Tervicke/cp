#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n;
	cin >> n;
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	int ans = 0;
	for(auto p : m){
		ans += p.second/2;
	}
	cout << ans << "\n";
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