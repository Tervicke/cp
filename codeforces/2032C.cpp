#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0 ; i < n - 1 ; i++){
		int x = lower_bound(v.begin(),v.end(),v[i] + v[i+1]) - v.begin();
		ans = max(ans,x-i);
	}
	cout << n - ans << "\n";
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
