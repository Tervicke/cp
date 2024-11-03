#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,k;
	cin >> n >> k;
	map<int,int> m; 
	for(int i = 0 ;i < k ; i++){
		int b,c;
		cin >> b >> c;
		m[b] += c;
	}
	int ans = 0;
	vector<pair<int, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;
  });
	for(auto p : vec){
		if(n == 0)
			break;
		ans+=p.second;
		n--;
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
