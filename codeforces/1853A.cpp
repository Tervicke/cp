#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	bool sorted = true;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		if(i == 0){continue;}
		if(v[i] < v[i-1]){
			sorted = false;
		}
	}
	if(!sorted){
		cout << "0\n";
	}else{
		int ans = INT_MAX;
		for(int i = 0 ; i < n - 1; i++){
			ans = min(ans , v[i+1] - v[i]);
		}
		if(ans % 2 == 0){
			ans = ans/2  + 1;
		}else{
			ans = (ans+ 1) / 2;
		}
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
