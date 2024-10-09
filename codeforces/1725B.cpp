#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,d;
	cin >> n >> d;
	vector<int> v;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		if(x > d){
			ans++;
			continue;
		}
		v.push_back(x);
	}
	n = v.size();
	int index = 0;
	sort(v.begin(),v.end(),greater<int>());
	while(n > 0){
		int required_mates = d/v[index] + 1;
		index++;
		if(required_mates <= n){
			ans++;
		}
		n -= required_mates;
	}
	cout << ans << "\n";
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
