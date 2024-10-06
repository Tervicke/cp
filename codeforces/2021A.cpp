#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ll sum = 0;
	sort(v.begin(),v.end());
	int last = (v[0] + v[1]) / 2; 
	for(int i = 2 ; i < n ; i++){
		last = (last + v[i]) / 2;
	}
	cout << last << "\n";
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
