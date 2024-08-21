#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	map<int,int> m;
	for(int i = 0 ;  i < n ; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	int mx = INT_MIN;
	for(auto p : m){
		mx = max(mx,p.second);
	}
	cout << n - mx << "\n"; 
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
