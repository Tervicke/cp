#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 1 ; i <= n ; i++){
		cin >> v[i];
	}
	vector<pair<int,int>> ans;
	for(int i = 1 ; i <= n ; i++){
		while(i != v[i]){
			int temp = v[i];
			v[i] = v[temp]; 
			v[temp] = temp;
			ans.push_back({i,temp});
		}
	}
	cout << ans.size() << endl;
	for(auto p : ans){
		cout << p.first << ' ' << p.second << endl;
	}
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

