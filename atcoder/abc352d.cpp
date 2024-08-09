#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> v;
	for(int i = 1 ; i <= n; i++){
		int x;
		cin >> x;
		v.push_back({x,i});
	}
	sort(v.begin(),v.end());
	set<int> s;
	for(int i = 0 ; i < k ; i++){
		s.insert(v[i].second);
	}
	int ans = *s.rbegin() - *s.begin();
	for(int i = k ; i < n ; i++){
		s.erase(v[i-k].second);
		s.insert(v[i].second);
		ans = min(*s.rbegin() - *s.begin(), ans);
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
