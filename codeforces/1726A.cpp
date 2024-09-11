#include <bits/stdc++.h>
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
	int ans = INT_MIN;
	for(int i = 1 ; i < n; i++){
		ans = max(ans,v[i] - v[0]);
	}
	for(int i = 0 ; i < n - 1; i++){
		ans = max(ans,v[n-1] - v[i]);
	}
	for(int i = 0 ; i < n - 1; i++){
		ans = max(ans,v[i] - v[i+1]);
	}
	if(n == 1){
		cout << "0\n";
	}else{
		cout << ans << "\n";
	}
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
