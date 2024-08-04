#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i= 0 ;i < n;i++){
		int x;
		cin >> x;
		v.push_back({x,i+1});
	}
	sort(v.begin(),v.end());
	cout << v[n-2].second << "\n";
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
