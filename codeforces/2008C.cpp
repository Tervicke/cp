#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int l,r;
	cin >> l >> r;
	vector<int> ans;
	ans.push_back(l);
	int i = 1;
	while(l + (i*(i+1))/2 <= r){
		ans.push_back(l + (i*(i/2)/2));
		i++;
	}
	cout << ans.size() << '\n';
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
