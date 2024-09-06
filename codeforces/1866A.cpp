#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int ans = INT_MAX;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		ans = min(ans,abs(x));
	}
	cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	//cin >> t;
	t = 1;
	while(t--){
		solve();
	}
	return 0;
}
