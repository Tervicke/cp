#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0 ;i < n ;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for(auto &x : v){
		x += ((v[n-1] - x) / (2*k)) * 2*k;
	}
	map<int,int> m;
	for(auto &x : v){
		m[x]++;
		m[x+k]--;
		m[x+2*k]++;
		m[x+3*k]--;
	}

	int ans = -1;
	int change = 0;
	for(auto p : m){
		change += p.second;
		if(change == n){
			ans = p.first;
			break;
		}
	}
	cout << ans << endl;
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
